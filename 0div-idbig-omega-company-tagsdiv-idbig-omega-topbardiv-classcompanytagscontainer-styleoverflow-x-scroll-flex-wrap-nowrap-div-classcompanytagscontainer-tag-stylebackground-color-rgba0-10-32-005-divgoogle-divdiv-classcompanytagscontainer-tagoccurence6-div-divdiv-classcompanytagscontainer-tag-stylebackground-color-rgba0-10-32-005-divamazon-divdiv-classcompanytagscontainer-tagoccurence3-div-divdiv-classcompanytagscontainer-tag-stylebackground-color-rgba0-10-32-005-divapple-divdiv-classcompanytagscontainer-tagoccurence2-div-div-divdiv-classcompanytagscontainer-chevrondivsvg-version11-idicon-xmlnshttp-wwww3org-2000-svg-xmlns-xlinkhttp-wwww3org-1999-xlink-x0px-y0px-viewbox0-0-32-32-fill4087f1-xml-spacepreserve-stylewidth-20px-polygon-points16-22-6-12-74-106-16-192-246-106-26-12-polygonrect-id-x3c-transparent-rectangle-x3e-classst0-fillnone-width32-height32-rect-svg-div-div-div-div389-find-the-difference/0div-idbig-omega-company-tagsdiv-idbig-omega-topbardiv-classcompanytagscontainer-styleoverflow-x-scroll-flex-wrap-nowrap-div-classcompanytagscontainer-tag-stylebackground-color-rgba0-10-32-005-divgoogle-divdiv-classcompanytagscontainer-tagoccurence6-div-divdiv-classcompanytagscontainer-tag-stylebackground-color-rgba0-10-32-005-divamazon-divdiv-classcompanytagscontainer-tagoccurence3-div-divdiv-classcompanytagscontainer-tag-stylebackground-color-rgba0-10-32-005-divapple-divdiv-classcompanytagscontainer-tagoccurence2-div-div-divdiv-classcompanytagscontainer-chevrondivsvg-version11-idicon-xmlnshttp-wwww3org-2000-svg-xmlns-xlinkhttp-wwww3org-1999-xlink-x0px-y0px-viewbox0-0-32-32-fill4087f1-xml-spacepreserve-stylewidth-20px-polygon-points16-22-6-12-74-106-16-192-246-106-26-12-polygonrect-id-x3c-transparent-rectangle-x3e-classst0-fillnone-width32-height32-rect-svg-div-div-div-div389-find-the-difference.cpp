class Solution {
public:
    char findTheDifference(string s, string t) {
        string sum=s+t;
        int ans=0;
        for(int i=0;i<sum.size();i++)
            ans^=sum[i];
        return ans;       
    }
};