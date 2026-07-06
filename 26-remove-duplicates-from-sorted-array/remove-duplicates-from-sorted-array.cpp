class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         int p = 1; // Updated Pointer
    
    for(int element:nums){
        if(nums[p-1]!=element){
            nums[p] = element;
            p++;
        }
        
    }
    return p;
        
    }
};