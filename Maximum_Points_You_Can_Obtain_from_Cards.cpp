class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int total = 0;
        int left = 0;
        int right = 0;
        int n = k;
        for(int i=0;i<n;i++){
            left+=cardPoints[i];

        }
        total = left;
        int rightindex = n-1;
        for(int i=k;i>0;i--){
            left+=cardPoints[i];
            right-=cardPoints[rightindex];
            rightindex--;
            total = max(total,left+right);
        }
        return total;

    }
};