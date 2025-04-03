    int repeatedNTimes2(vector<int>& A) {
        unordered_set<int> seen;
        for (int a: A) {
            if (seen.count(a))
                return a;
            seen.insert(a);
        }
    }