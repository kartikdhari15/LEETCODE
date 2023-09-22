class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate=-1;
        int ctr=0;
        for(auto n:nums)
        {
            if(ctr==0)
                candidate=n;
            if(n==candidate)
                ctr++;
            else
                ctr--;
        }
        return candidate;
    }
};