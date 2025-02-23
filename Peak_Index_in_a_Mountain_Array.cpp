class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int prev,curr;
        int n = arr.size();
        for(int i=0;i<n-1;i++){
            int prev = arr[i];
            int curr = arr[i+1];
            if(prev>curr){
                return i;
            }
        }
        return -1;
    }
};