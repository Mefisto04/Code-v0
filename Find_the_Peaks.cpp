class Solution {
public:
    vector<int> findPeaks(vector<int>& arr) {
        vector<int> peaks;
    int n = arr.size();
    if (n == 1) {
        peaks.push_back(0);
    } else {
        if (arr[0] >= arr[1]) {
            peaks.push_back(0);
        }
        if (arr[n - 1] >= arr[n - 2]) {
            peaks.push_back(n - 1);
        }
        for (int i = 1; i < n - 1; i++) {
            if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
                peaks.push_back(i);
            }
        }
    }
    return peaks;

    }
};