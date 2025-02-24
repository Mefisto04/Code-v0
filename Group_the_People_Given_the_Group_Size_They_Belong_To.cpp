class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int, vector<int>> arr;
        for (int i = 0; i < groupSizes.size(); ++i) {
            int size = groupSizes[i];
            arr[size].push_back(i);
        }
        
        vector<vector<int>> result;
        for (auto& entry : arr) {
            int size = entry.first;
            vector<int> people = entry.second;
            
            for (int i = 0; i < people.size(); i += size) {
                vector<int> group;
                for (int j = i; j < i + size && j < people.size(); j++) {
                    group.push_back(people[j]);
                }
                result.push_back(group);
            }
        }
        
        return result;

    }
};