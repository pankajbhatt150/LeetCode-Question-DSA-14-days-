//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0  

// N is used for the size of Sudoku grid.  
// Size will be NxN  
#define N 9  


// } Driver Code Ends
class Solution 
{
    public:
    //Function to find a solved Sudoku. 
       bool row(int grid[N][N],int j,int val){

        for(int I=0;I<9;I++){

            if(grid[I][j]==val)

                return false;

        }

        return true;

    }

 //Check if not in any column for particular row 

    bool col(int grid[N][N],int i,int val){

        for(int J=0;J<9;J++){

            if(grid[i][J]==val)

                return false;

        }

        

        return true;

    }

    bool matrix(int grid[N][N],int i,int j,int val){

        //check the presence in 3*3 matrix

        int st=i-i%3,end=j-j%3;

        for(int l=st;l<st+3;l++){

            for(int m=end;m<end+3;m++){

                if(grid[l][m]==val)

                    return false;

            }

        }

        return true;

    }

    bool backtrack(int grid[N][N],int i,int j){

        if(i==N){

            return true;

        }

        else if(j==N){

           //next row

            return backtrack(grid,i+1,0);

        }

        else if(grid[i][j]!=0){

           //non-zero value

            return backtrack(grid,i,j+1);

        }

        else{

            bool flag=false;

            for(int k=1;k<=N;k++){

                if(row(grid,j,k)&&col(grid,i,k)&&matrix(grid,i,j,k))

                {

                    grid[i][j]=k;

                    flag=backtrack(grid,i,j+1);

                    //if flag ==true, then break out

                     //else try for 1-9 other values

                    if(!flag)

                        grid[i][j]=0;

                    else

                        break;

                }

            }

            return flag;

        }

    }

    bool SolveSudoku(int grid[N][N])  

    { 

        backtrack(grid,0,0);

        return true;

    }

    

    //Function to print grids of the Sudoku.

    void printGrid (int grid[N][N]) 

    {

        // Your code here 

        for(int i=0;i<N;i++){

            for(int j=0;j<N;j++){

                cout<<grid[i][j]<<" ";

            }

        }   // Your code here 
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		        
		Solution ob;
		
		if (ob.SolveSudoku(grid) == true)  
            ob.printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	}
	
	return 0;
}
// } Driver Code Ends