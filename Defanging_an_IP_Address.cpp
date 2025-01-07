class Solution {
public:
    string defangIPaddr(string address) {
        string str = "";
        int n = address.size();
        for(int i=0;i<n;i++){
            if(address[i]=='.') str += '[.]';
            else str += address[i];
        }
        return str;
    }
};