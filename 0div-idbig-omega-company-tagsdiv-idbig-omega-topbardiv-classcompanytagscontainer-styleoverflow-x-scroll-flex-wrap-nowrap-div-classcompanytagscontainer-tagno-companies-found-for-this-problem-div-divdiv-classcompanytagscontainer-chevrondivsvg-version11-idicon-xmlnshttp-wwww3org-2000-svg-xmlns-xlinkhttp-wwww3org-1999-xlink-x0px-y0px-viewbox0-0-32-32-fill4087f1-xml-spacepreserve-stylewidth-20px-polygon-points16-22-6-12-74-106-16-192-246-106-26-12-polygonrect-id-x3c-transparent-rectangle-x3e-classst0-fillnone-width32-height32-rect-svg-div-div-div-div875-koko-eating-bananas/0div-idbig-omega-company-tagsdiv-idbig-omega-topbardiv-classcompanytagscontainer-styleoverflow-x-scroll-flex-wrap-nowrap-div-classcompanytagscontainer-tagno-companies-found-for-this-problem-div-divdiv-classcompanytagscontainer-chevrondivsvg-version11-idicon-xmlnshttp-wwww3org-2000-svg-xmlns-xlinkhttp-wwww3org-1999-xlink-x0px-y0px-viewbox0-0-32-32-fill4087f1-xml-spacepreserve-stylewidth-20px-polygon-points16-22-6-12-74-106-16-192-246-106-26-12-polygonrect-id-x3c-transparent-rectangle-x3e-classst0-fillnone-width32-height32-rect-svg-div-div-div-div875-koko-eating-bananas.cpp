class Solution {
public:
    int findMax(vector<int>& piles){
        int maxi=INT_MIN,n=piles.size();
        for(int i=0;i<n;i++)
            maxi=max(maxi,piles[i]);
        return maxi;
    }
    long totalhours(vector<int>& piles,int hourly){
        long hours=0;
        int n=piles.size();
        for(int i=0;i<n;i++)
            hours+=ceil((double)piles[i]/(double)hourly);
        return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h){
        int low=1,high=findMax(piles);
        while(low<=high){
            int mid=(low+high)/2;
            long hours=totalhours(piles,mid);
            if(hours<=h)
                high=mid-1;
            else
                low=mid+1;
        }
        return low;
    }
};