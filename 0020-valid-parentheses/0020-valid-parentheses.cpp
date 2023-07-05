class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' or s[i]=='[' or s[i]=='{')
                st.push(s[i]);
            else{
                if(st.empty())
                    return false;
                char c=st.top();
                if((s[i]==')' && c=='(') or (s[i]==']' && c=='[') or (s[i]=='}' && c=='{'))
                    st.pop();
                else
                    return false;
            }
        }
        if(st.empty())
            return true;
        return false;
    }
};