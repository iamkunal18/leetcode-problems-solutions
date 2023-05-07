class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int size1 = matrix.size();
        int size2 = matrix[0].size();
        
        vector<int> v1(size2, 0);
        vector<int> v2(size1, 0);
        for(int i = 0; i < size1; i++) {
           for(int j = 0; j < size2; j++) {
               if(matrix[i][j] == 0) {
                   v1[j] = 1;
                   v2[i] = 1;
               }
           } 
        }
        for(int i = 0; i < size1; i++) {
           for(int j = 0; j < size2; j++){ 
               if(v1[j] == 1) matrix[i][j] = 0;
               if(v2[i] == 1) matrix[i][j] = 0;
           }
        }
    }
};