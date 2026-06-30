class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string cleaned;
        // Step 1: Remove dashes and convert to uppercase
        for (char c : s) {
            if (c != '-') {
                cleaned += toupper(c);
            }
        }

        // Step 2: Determine size of first group
        int n = cleaned.size();
        int firstGroupSize = n % k;
        if (firstGroupSize == 0 && n > 0) firstGroupSize = k;

        string result;
        int i = 0;

        // Step 3: Add first group
        result.append(cleaned.substr(i, firstGroupSize));
        i += firstGroupSize;

        // Step 4: Add remaining groups of size k
        while (i < n) {
            result.push_back('-');
            result.append(cleaned.substr(i, k));
            i += k;
        }

        return result;
    }
};
