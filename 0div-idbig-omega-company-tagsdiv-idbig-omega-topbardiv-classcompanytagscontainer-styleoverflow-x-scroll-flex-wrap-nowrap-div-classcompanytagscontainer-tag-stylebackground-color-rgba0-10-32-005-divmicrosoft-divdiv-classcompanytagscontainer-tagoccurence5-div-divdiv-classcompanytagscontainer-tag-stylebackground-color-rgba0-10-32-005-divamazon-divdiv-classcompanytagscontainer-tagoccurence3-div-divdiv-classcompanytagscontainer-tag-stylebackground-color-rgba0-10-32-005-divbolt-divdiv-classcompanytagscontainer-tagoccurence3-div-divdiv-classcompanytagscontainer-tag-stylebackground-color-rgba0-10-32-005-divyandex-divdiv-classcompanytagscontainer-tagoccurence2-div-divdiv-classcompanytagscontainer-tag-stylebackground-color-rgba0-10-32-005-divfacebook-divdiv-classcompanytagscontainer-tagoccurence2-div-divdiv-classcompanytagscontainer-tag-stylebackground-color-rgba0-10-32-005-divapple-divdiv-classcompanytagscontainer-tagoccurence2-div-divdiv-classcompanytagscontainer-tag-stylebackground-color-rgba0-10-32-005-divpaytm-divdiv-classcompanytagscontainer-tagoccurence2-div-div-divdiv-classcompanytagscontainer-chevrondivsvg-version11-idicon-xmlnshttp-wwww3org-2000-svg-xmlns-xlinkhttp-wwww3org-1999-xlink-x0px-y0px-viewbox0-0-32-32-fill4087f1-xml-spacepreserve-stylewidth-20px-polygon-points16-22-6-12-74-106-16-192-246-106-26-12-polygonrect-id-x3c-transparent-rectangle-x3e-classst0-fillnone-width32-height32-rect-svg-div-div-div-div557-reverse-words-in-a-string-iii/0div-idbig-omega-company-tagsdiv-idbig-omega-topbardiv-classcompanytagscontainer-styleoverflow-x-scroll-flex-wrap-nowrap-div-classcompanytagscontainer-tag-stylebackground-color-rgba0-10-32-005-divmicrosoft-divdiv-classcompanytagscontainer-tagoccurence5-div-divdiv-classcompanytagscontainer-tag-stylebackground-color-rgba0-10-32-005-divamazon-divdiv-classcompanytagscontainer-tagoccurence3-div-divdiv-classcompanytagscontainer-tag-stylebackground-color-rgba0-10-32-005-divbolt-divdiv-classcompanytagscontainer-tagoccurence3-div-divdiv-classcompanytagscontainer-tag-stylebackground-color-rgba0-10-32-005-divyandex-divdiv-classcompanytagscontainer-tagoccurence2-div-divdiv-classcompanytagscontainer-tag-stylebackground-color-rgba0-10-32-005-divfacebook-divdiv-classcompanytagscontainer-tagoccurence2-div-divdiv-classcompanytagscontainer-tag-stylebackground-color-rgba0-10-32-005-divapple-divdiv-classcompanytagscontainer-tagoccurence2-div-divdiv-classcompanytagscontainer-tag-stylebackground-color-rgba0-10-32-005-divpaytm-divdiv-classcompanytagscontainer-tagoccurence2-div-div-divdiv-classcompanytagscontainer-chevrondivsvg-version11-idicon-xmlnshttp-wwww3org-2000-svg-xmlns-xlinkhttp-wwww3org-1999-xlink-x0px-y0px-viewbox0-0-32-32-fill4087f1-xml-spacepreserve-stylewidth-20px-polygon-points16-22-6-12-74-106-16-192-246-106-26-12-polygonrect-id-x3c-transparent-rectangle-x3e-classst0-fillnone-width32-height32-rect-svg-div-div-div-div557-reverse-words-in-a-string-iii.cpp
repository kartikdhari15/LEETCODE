class Solution {
public:
    string reverseWords(string s) {
        int i=0,start=0;
        while(i<s.size()){
        if(s[i]==' '){
            reverse(s.begin()+start,s.begin()+i);
            start=i+1;            
        }
        i++;            
        }
        reverse(s.begin()+start,s.end());
        return s;
    }
};