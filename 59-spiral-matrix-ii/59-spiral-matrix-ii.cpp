class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
      vector<vector<int>> mat(n,vector<int>(n,0));
        int left = 0,right = n-1;
        int top = 0,bottom = n-1;
        int dir  = 1,cnt = 1;
        /*
        dir1 = top row, dir2 = right col, dir3 = bottom row, dir4 = left col
        */
        while(top<=bottom && left<=bottom){
            if(dir==1){
                for(int i = left;i<=right;i++){
                    mat[top][i] = cnt++;
                }
                top++;
                dir = 2;
            }
            else if(dir==2){
                for(int i = top;i<=bottom;i++){
                    mat[i][right] = cnt++;
                }
                right--;
                dir = 3;
            }
            else if(dir==3){
                for(int i = right;i>=left;i--){
                    mat[bottom][i] = cnt++;
                }
                bottom--;
                dir = 4;
            }
            else{
                for(int i = bottom;i>=top;i--){
                    mat[i][left] = cnt++;
                }
                left++;
                dir = 1;
            }
        }
        
        return mat;   
    }
};