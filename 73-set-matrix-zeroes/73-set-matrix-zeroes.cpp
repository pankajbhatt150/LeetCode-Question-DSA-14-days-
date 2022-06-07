class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       int rows=matrix.size();
    int cols=matrix[0].size();
    //instead of updating the 0,0 we update the col variable to 0 and 
    // populate the element of 0th col acc to col variable such that if 0,0 is non zero then while traversing backward for applying zero we wont put zer in jth,0 as it looks the 0,0 for converting
    int col=1;
    for(int i=0;i<rows;i++){
        if(matrix[i][0]==0){
            col=0;
        }
        for(int j=1;j<cols;j++){
            if(matrix[i][j]==0){
                matrix[i][0]=0; matrix[0][j]=0;
            }
        }
    }
    
    for(int i=rows-1;i>=0;i--){
        //checks for the 1,col-1 to see the dummy 0th row
        for(int j=cols-1;j>=1;j--){
            
            if(matrix[i][0]==0 || matrix[0][j]==0){
                matrix[i][j]=0;
            }
        }

        // for 0th col we check the col variable instead of the 0,0 element
        if(col==0){
            matrix[i][0]=0;
        }
    }
    }  
        
    
};