class Solution {
public:
    /**
        taking first row and first column as markers. but we need to make           an extra variable for row[0] marker because of some edge cases.
        now point our markers for matrix. then first solve matrix in               reverse order(exclude first row and first column). then solve first
        row and in last solve first column.
    **/
    
    void setZeroes(vector<vector<int>>& matrix) {
        int size1 = matrix.size();
        int size2 = matrix[0].size();
        
        int strtCol = 1; 
        
        for(int i = 0; i < size1; i++) {
           for(int j = 0; j < size2; j++) {
               if(matrix[i][j] == 0) {
                   if(j == 0){
                       strtCol = 0;
                   }
                   else{
                       matrix[i][0] = 0;
                       matrix[0][j] = 0;
                   }
               }
           } 
        }
        for(int i = size1-1; i > 0; i--) {
           for(int j = size2-1; j > 0; j--){ 
               if(matrix[i][0] == 0 || matrix[0][j] == 0) matrix[i][j] = 0;
           }
        }
        
        for(int i = 1; i < size2; i++) {
            if(matrix[0][0] == 0) matrix[0][i] = 0;
        }
        for(int j = 0; j < size1; j++) {
            if(strtCol == 0) matrix[j][0] = 0; 
        }
        
    }
};