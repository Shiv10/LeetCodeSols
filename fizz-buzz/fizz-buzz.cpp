class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        int i;
        for(i = 0; i<n; i++) {
            if ((i+1)%3 == 0 and (i+1)%5 == 0) {
                ans.push_back("FizzBuzz");
                continue;
            }
            
            if ((i+1)%5 == 0) {
                ans.push_back("Buzz");
                continue;
            }
            
            if ((i+1)%3 == 0) {
                ans.push_back("Fizz");
                continue;
            }
            
            ans.push_back(to_string(i+1));
        }
        
        return ans;
    }
};