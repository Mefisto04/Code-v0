class Solution {
private:
    // dir1 & dir2 are enemy
    void compute(int dir1, int dir2,int dir3, int dir4, vector<int>& k_cnt, vector<int>& dist){
        dist[dir1] += ((k_cnt[dir1]>0)?1:-1); 
        k_cnt[dir1]--;

        dist[dir2] += ((k_cnt[dir2]>0)?1:-1);
        k_cnt[dir2]--;

        dist[dir3]++;
        dist[dir4]++;
    }
public:
    int maxDistance(string s, int k) {
        if(s.size() == k){return k;}
        int mx = 0;

        // 0 - ne, 1 - es, 2 - nw, 3 - ws
        vector<int> k_cnt(4, k);
        vector<int> dist(4, 0);

        for(int i=0;i<s.size();i++){

            if(s[i] == 'N'){ compute(1,3,0,2, k_cnt, dist); }
            else if(s[i] == 'E'){ compute(2,3,1,0, k_cnt, dist); }
            else if(s[i] == 'W'){ compute(0,1,2,3, k_cnt, dist); }
            else{ compute(0,2,1,3, k_cnt, dist); }

            mx = max({mx, dist[0], dist[1], dist[2], dist[3]});
        }

        return mx;
    }
};