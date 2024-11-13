class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major=0;
        int ctr=0;
        for(int i=0;i<nums.size();i++){
        if(ctr==0)
            major=nums[i];
        if(nums[i]==major)
            ctr++;
        else
            ctr--;
        }  
        return major;
    }
};