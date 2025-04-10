class Solution {
public:
    int getLucky(string s, int k) {
        int first=0;
        int temp = 0;
        for(int i=0;i<s.size();i++)
            first=first*10 + (s[i]-'a');
        for(int i=0;i<k;i++){
            temp = sum(first);
        }
        return temp;
    }
};