class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> m;

        if (s.size() < t.size()){
            return "";
        }

        for (auto value:t){
            m[value]++;
        }

        unordered_map<char,int> temp = m;
        int left = 0;
        int right = 0;
        int min_len = INT_MAX;
        int curr_len;
        string res;

        while (right < s.size()){
            
            // cout<<"current\t"<<s[right]<<"\t";

            //found the element
            if (temp.find(s[right]) != temp.end()){

                // cout<<"found the element\t"<<temp[s[right]]<<"\n";

                if (temp[s[right]] == 1){
                    temp.erase(s[right]);
                }
                else{
                    temp[s[right]]--;
                }
                // cout<<"temp is now of size  "<<temp.size()<<endl;
                if (temp.size() == 0){
                    // cout<<"temp is empty now\t";
                    curr_len = right - left + 1;
                    
                    // cout<<"curr_len and min_len is "<<curr_len<<"\t"<<min_len<<endl;
                    if (curr_len < min_len){
                        min_len = min(min_len,curr_len);
                        res = s.substr(left,curr_len);
                    }
                    temp = m;
                    right = left;
                    left++;
                }

                

            }

            //not found the element
            else{
                if (temp == m){
                    left++;
                }
                // left++;
                // cout<<"not found the element so keep going\n";
            }

            right++;

        }
        
        return res;

    }
};