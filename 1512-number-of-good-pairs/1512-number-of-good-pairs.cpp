class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int res=0;
        unordered_map<int,int>ctr;
        for(int i:nums){
            res+=ctr[i]++;
        }
        return res;
    }
};