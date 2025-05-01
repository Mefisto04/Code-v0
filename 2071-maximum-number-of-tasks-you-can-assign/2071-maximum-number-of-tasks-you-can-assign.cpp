class Solution {
public:
    int maxTaskAssign(vector<int>& tasks, vector<int>& workers, int pills, int strength) {
        bool canAssign = true;
        for(int i = mid - 1; i >= 0; --i) {
            auto it = prev(workersFree.end());
            
            if(*it < tasks[i]) {
                it = workersFree.lower_bound(tasks[i] - strength);
                if(it == workersFree.end()) {
                    canAssign = false;
                    break;
                }
            ++usedPills;
            if (usedPills > pills) {
                canAssign = false;
                break;
                }
            }
            workersFree.erase(it);
        }
    }
};