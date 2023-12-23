class Solution {
public:
    #define ll long long
    #define mod 1000000007
    int maximizeSquareArea(int m, int n, vector<int>& hFences, vector<int>& vFences) {
        hFences.push_back(0);
        hFences.push_back(m);
        vFences.push_back(0);
        vFences.push_back(n);
        sort(hFences.begin(), hFences.end());
        sort(vFences.begin(), vFences.end());
        vector<ll> hDist, vDist;
        for (int i = 1; i < hFences.size(); i++) {
            hDist.push_back(hFences[i] - hFences[i - 1]);
        }

        for (int i = 1; i < vFences.size(); i++) {
            vDist.push_back(vFences[i] - vFences[i - 1]);
        }

        sort(hDist.begin(), hDist.end());
        sort(vDist.begin(), vDist.end());

        ll res = 0;
        for (int i = hDist.size()-1, j = vDist.size()-1; i >= 0 && j >= 0; ) {
            if (hDist[i] < vDist[j]) {
                j--;
            } else if (hDist[i] > vDist[j]) {
                i--;
            } else {
                res = hDist[i];
                break;
            }
        }

        if (res == 0) {
            return -1;
        } else {
            return (res * res) % mod;
        }
    }
};