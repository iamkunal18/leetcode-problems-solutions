class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> temp;
        
        temp.push_back(1);
        
        ans.push_back(temp);
        
        for(int i = 0; i < numRows-1; i++) {
            vector<int> temp2;
            
            for(int j = 0; j < temp.size(); j++) {
                
                if(j == 0) temp2.push_back(temp[j]);
                else {
                    temp2.push_back(temp[j] + temp[j-1]);
                }
                
            }
            
            temp2.push_back(temp[temp.size()-1]);
            ans.push_back(temp2);
            temp = temp2;
            
        }
        
        return ans;
    }
};