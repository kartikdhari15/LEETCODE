class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l=0,r=arr.size()-1,missing=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            missing=arr[mid]-(mid+1);
            if(missing<k)
                l=mid+1;
            else
                r=mid-1;
        }
        return k+r+1;
    }
};