class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sumOfDivi = 0;
        int sumOfND = 0;
        for(int i = 1; i<=n; i++){
            if(i%m==0){  
                sumOfDivi+= i;
            } else{ 
                sumOfND+=i;
            }
        }
        int result =  sumOfND - sumOfDivi;
        return result;
    }
};