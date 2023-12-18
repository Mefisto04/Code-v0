class Solution {
public:
    int numberOfSteps(int num) {
        if(num==0)return 0;
        int a=(int)log2(num)+1;
        int b=__builtin_popcount(num);
        return a+b-1;
    }
};