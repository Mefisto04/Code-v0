class Solution {
public:
    int countDigitOne(int n) {
        int res=0;
        for(long long i=1;i<=n;i*=10){
            long long d=i* 10; 
            res+=(n/d) *i; 
            int r=n%d;
            if(r>= 2*i)
                res+=i;
            else if(r>=i)
                res+=r-i+1;
        }
        return res;
    }
};