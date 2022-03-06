class Solution {
public:
    vector<vector<int>> generate(int numRows) {
     vector<vector<int>> r(numRows);
        
        for(int i=0 ; i<numRows ; i++) //for generating each row of the triangle
        {
            r[i].resize(i+1);
            r[i][0] = r[i][i] =1;
            for(int j=1; j<i ; j++) //Run an inner loop from j = 1 to j = {previous row size} for calculating element of each row of the triangle.
            {
                r[i][j] = r[i-1][j-1] + r[i-1][j];
            }
        }
        return r;
    }
};