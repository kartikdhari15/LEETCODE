class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n=operations.size(),s=0;
        for(int i=0;i<n;i++)
        {
            if(operations[i]=="--X"||operations[i]=="X--")
                s--;
            else
                s++;
        }
        return s;
    }
};