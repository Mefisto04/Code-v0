class Solution {
public:
    void find(string &s,string p,int &f)
    {
        string ans;
        for(int i=0;i<s.size();i++)
        {
            if(s.substr(i,p.size())==p)
            {
                f=1;
                s.erase(i,p.size());
            }
        }
    }
    string removeOccurrences(string s, string p)
    {
        while(true)
        {
            int f=0;
            find(s,p,f);
            if(f==0)
            {
                break;
            }
        }
        return s;
    }
};