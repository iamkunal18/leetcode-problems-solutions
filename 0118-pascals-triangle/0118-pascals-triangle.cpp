class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> temp(1, 1);
                
        ans.push_back(temp);
        
        for(int i = 2; i <= numRows; i++) {
            vector<int> temp2;
            int temp_variable = 1;
            temp2.push_back(temp_variable);
            
            for(int j = 1; j < i; j++) {
                // Using concept of nCr
                temp_variable = temp_variable *  (i-j);
                temp_variable = temp_variable / j;
                temp2.push_back(temp_variable);
            }
            
            ans.push_back(temp2);            
        }
        
        return ans;
    }
};