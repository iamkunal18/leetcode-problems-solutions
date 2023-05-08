class Solution {
public:
    vector<int> generaterow(int rowNo) {
        vector<int> row;
        int temp_variable = 1;
        row.push_back(temp_variable);

        for(int col = 1; col < rowNo; col++) {
            // Using concept of nCr
            temp_variable = temp_variable *  (rowNo-col);
            temp_variable = temp_variable / col;
            row.push_back(temp_variable);
        }
        return row;
        
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> firstRow(1, 1);
                
        ans.push_back(firstRow);
        
        for(int row = 2; row <= numRows; row++) {
            ans.push_back(generaterow(row));            
        }
        
        return ans;
    }
};