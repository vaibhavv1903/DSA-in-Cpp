class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z')
            {
                st.push(s[i]);
            }
            else if(s[i]=='#')
            {
                if(!st.empty())
                st.pop();
            }
        }
        stack<char>st2;
        for(int i=0;i<t.size();i++){
            if(t[i]>='a' && t[i]<='z'){
                st2.push(t[i]);
            }
            else if(t[i]=='#')
            {
                if(!st2.empty())
                st2.pop();
            }
        }
        return st==st2;
    }
};