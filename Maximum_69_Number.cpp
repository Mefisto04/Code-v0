class Solution {
public:
    int maximum69Number (int num) {
        int maxx = INT_MIN;
        string s = to_string(num);
        for(int i=0;i<s.size();i++){
            if(s[i]=='6'){
                s[i]='9';
            }
        }
        return stoi(s);
    }
};