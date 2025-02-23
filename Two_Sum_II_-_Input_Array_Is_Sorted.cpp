class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        int n = numbers.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(numbers[i]+numbers[j] == target){
                    ans.push_back(i+1);
                    ans.push_back(j+1);
                    return ans;
                }
            }
        }
        return ans;
    }
};