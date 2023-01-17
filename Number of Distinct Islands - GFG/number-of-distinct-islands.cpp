//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    private:

  void dfs(int row,int col,vector<vector<int>>&vis,

 vector<pair<int,int>>&v,vector<vector<int>>& grid,int row0, int col0){

      

      vis[row][col] = 1;

      int n = grid.size();

      int m = grid[0].size();

      v.push_back({row-row0,col-col0});

      

      int delrow[]= {-1,0,1,0};

      int delcol[] = {0,1,0,-1};

      

      for(int i=0;i<4;i++){

          int nrow = row + delrow[i];

          int ncol = col + delcol[i];

          

          //main logic

          if(nrow >=0 and nrow <n and ncol >=0 and ncol<m and !vis[nrow][ncol] and grid[nrow][ncol]==1){

              

              dfs(nrow,ncol,vis,v,grid,row0,col0);

          }

      }

  }

  

  public:

    int countDistinctIslands(vector<vector<int>>& grid) {

      int n = grid.size();

      int m = grid[0].size();

      

      vector<vector<int>>vis(n,vector<int>(m,0));

      

      // to ket the resultant {(),(),(),()}

      //vector<pair<int,int>>v;

      // to store the vector in the set 

      set<vector<pair<int,int>>>s;

      

      for(int i=0;i<n;i++){

          for(int j=0;j<m;j++){

               

               if(!vis[i][j] and grid[i][j]==1){

                   vector<pair<int,int>>v;

                   dfs(i,j,vis,v,grid,i,j);

                   

                   s.insert(v);

               }

         }

      }

      

      

      

      return s.size();  // code here
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends