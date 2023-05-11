//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool isSafe(vector<vector<int>>& board,int row,int col, int n){
    // checkin
    for(int i=0;i<col;i++){
        if(board[row][i]){
            return false;
        }
    }
    // chceking upper diagonal
    for(int i=row,j=col;j>=0 && i>=0;j--,i--){
        if(board[i][j]){
            return false;
        }
    }
    // checking lower diagonal
    for(int i=row,j=col; j>=0 && i<n; j--,i++){
        if(board[i][j]){
            return false;
        }
    }
    return true;
}

void solveQueens(vector<vector<int>>& board, int col, int n, vector<vector<int>>& res){
    if(col==n){
        vector<int> temp;
        for(int col=0;col<n;col++){
            for(int row=0;row<n;row++){
                if(board[row][col]==1){
                    temp.push_back(row+1);
                }
            }
        }
        res.push_back(temp);
        return;
    }
    for(int i=0;i<n;i++){
        if(isSafe(board,i,col,n)){
            //place a queen
            board[i][col] =1;
            // recusively do it for all queens 
            solveQueens(board, col+1, n, res);
            //backtrack if it didn't provide a solution
            board[i][col] =0;
        }
    }
}
    vector<vector<int>> nQueen(int n) {
       vector<vector<int>> board(n,vector<int>(n,0));
       vector<vector<int>> res;
       solveQueens(board,0,n,res);
       return res;   // code here
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends