class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int m=0,ctr=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                ctr++;
                m=max(m,ctr);
            }
            else
                ctr=0;
        }
        return m;
    }
};