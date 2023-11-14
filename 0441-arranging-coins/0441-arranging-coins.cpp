class Solution {
public:
    int arrangeCoins(int n) {
        int start=1,end=n,ans;
        if(n<3) return 1;
        while(start<=end){
            int mid=start+(end-start)/2;
			// use the formula of sum of AP series
            if(((long)(1+mid)*mid/2)<=n){
                ans=mid;
                start=mid+1;
            }
            else end=mid-1;
        }
        return ans;
    }
};