class Solution {
public:
    int addDigits(int num) {
        int temp=0;
        while(num>9){
            while(num>0){
                int last = num%10;
                temp+=last;
                num/=10;
            }
            num=temp;
            temp=0;
        }
        return num;
    }
};