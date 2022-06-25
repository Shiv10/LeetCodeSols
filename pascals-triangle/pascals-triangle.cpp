class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> n;
        vector<int> temp;
        temp.push_back(1);
        if (numRows<1) return n;
        
        n.push_back(temp);
        if(numRows==1) return n;
        
        temp.push_back(1);
        n.push_back(temp);
        if(numRows==2) return n;
        
        int c = 3;
        int i;
        for (i=2;i<numRows;i++) {
            vector<int> temp(c);
            temp[0]=1;
            temp[c-1] = 1;
            
            for(int j = 1; j<c-1; j++) {
                temp[j] = n[i-1][j-1]+n[i-1][j];
            }
            n.push_back(temp);
            c++;
        }
        return n;
    }
};