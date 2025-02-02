class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        st.push(s[0]);
        for(int i=0;i<s.size();i++){
            if(st.pop() == s[i]){
                st.pop();
            }
            st.push();
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