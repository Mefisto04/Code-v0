#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int minimumBoxes(std::vector<int>& apple, std::vector<int>& capacity) {
        int total_apples = 0;
        int total_capacity = 0;

        if (apple.empty()) return 0; // No apples to store
        
        // Sort containers in descending order
        std::sort(capacity.begin(), capacity.end(), std::greater<int>());
        
        // Compute total apples
        for (int apples : apple) {
            total_apples += apples;
        }

        // Fill containers greedily
        for (int i = 0; i < capacity.size(); i++) {
            total_capacity += capacity[i];
            if (total_capacity >= total_apples) {
                return i + 1; // Minimum containers used
            }
        }
        
        return 0; // Not enough containers
    }
};