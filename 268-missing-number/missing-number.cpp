class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum =0;
        int act=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            act+=i;
        }
        act+=nums.size();
        return act-sum;

        
    }
};