class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int>s;
        if(nums.size()<3)
            return false;
        int max=INT_MIN;
        for(int i=nums.size()-1;i>=0;i--){
            int current=nums[i];
            if(current<max)
                return true;
            while(!s.empty()&&s.top()<current){
            max=s.top();
            s.pop();            
            }
            s.push(current);
        }
        return false;
    }
};