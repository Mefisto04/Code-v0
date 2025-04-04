class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int>arr;
        for(int i=1;i<=n;i++){
            if(n%i==0) a.push_back(i);
        }
        return a[k-1];
    }
};