class Solution {
public:
    int subarraysWithKDistinct(vector<int>& arr, int k) {
        int cogs=0; 
        int count = 0, n = arr.size(), si = 0, ei = 0;
        int freq[20000 + 1];
        
        
        while (ei<n) {
            if (ei<n && freq[arr[ei++]]++ == 0) count++;
            
            if(count==k) cogs++;
            
            if (count > k || ei==n) {
                si++;
                ei=si;
                count = 0;
                int freq[20000 + 1];
            }
            
        }
        return cogs;
    }
};