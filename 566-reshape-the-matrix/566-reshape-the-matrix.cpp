class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        // n and m are rows and column of matrix
       int n = mat.size();
       int m  = mat[0].size();
        // the size of both the matrix must be equal
        if (n*m != r * c) return mat;
        
        vector<vector<int>> ans(r, vector<int>(c));
        int row = 0, col = 0;
        
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[i].size(); j++) {
                
                ans[row][col] = mat[i][j];
                col++;
                
                if (col == c) {
                    col = 0; 
                    row++;
                }
            }
        }        
        return ans;
    }
};