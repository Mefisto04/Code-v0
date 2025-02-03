class Solution {
public:
    unordered_map<char,string> v={{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
    vector<string> str;
    void solve(string s,string &p,int k){
        if(k==p.size()){
            str.push_back(s);
            return;
        }
        string m = v[p[k]];
        for(int i=0;i<m.size();i++){
            s.push_back(m[i]);
            solve(s,p,k+1);
            s.pop_back();
        }

    }
    vector<string> letterCombinations(string digits) {
        string s = "";
        if(digits.empty()) return {};
        solve(s,digits,0);
        return str;
    }
};