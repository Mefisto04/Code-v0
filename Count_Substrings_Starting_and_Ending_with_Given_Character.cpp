class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long temp=0,cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==c){
                cnt++;
                temp+=cnt;
            }
        }
        return temp;
    }
};