class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> m;
        for(auto x: words) {
            if (m.find(x)==m.end()) {
                m[x] = 1;
            } else {
                m[x]++;
            }
        }
        
        vector<vector<string>> freq(words.size()+1);
        
        for (auto i: m) {
            freq[i.second].push_back(i.first);
        }
        
        for (auto x: freq) {
            sort(x.begin(), x.end());
        }
        
        vector<string> ans;
        int i;
        for(i = words.size(); i>0; i--){
            for (auto x: freq[i]) {
                if (k<1) break;
                ans.push_back(x);
                k--;
            }
            if (k<1) break;
        }
        
        return ans;
    }
};