class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1=-1,c2=-1;
        int ctr1=0,ctr2=0;
        for(int i=0;i<nums.size();i++){
            if(c1==nums[i])
                ctr1++;
            else if(c2==nums[i])
                ctr2++;
            else if(ctr1==0){
                c1=nums[i];
                ctr1++;
            }
            else if(ctr2==0){
                c2=nums[i];
                ctr2++;
            }
            else{
                ctr1--;
                ctr2--;
            }
        }
            vector<int> v;
            ctr1=0;
            ctr2=0;
            for(auto x:nums){
                if(c1==x)
                    ctr1++;
                else if(c2==x)
                    ctr2++;
            }
            if(ctr1>nums.size()/3)
                v.push_back(c1);
            if(ctr2>nums.size()/3)
                v.push_back(c2);
            return v;
    }
};