class Solution(object):
    def licenseKeyFormatting(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: str
        """
        # Step 1: Remove dashes and convert to uppercase
        cleaned = s.replace("-", "").upper()
        
        # Step 2: Build result from the end
        res = []
        count = 0
        
        for i in range(len(cleaned) - 1, -1, -1):
            res.append(cleaned[i])
            count += 1
            if count == k and i != 0:
                res.append('-')
                count = 0
        
        # Step 3: Reverse to get final string
        return "".join(res[::-1])
