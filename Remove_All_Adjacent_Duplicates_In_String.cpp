class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        st.push(s[0]);
        for(int i=0;i<s.size();i++){
            if(s!st.empty() && t.top() == s[i]){
                st.pop();
            }
            st.push(s[i]);
        }
        string ss = "";
        while(!st.empty()){
            ss+=st.top();
            st.pop();
        }
        reverse(ss.begin(),ss.end());
        return ss;

    }
};