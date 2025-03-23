class Solution {
public:
    int minimumSum(int num) {
        vector<int> arr;
        
        while(num){
            int rem=num%10;
            num=num/10;
            arr.push_back(rem);
        }
        sort(arr.begin(),arr.end());
        int n1=arr[0]*10+arr[3];
        int n2=arr[1]*10+arr[2];
        return n1+n2;

    }
};