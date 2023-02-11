//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:

     bool possible(int mid, vector<int>&stalls,int k)
      {
          int i,j,temp=stalls[0],count=1;
          for(i=1;i<stalls.size();i++)
          {
              if(stalls[i]-temp>=mid)
              {
                  temp=stalls[i];
                  count++;
              }
              if(count==k)
              return true;
          }
          return false;
          
          
          
      }
    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        int  i,j;
        sort(stalls.begin(), stalls.end()) ;// nlog(n)
        // to get the order of placement of the  cows.
       int diff_max=stalls[n-1]-stalls[0],ans=1;
       int diff_min=1,mid;
        while(diff_min<=diff_max)
        {
            // cout<<diff_min<<diff_max<<" ";
            mid=(diff_min+diff_max)/2;
            //   cout<< mid<<" ";
            if(possible(mid,stalls,k))
            {
                // cout<< mid<<" ";
                diff_min=mid+1;
                ans=max(ans,mid);
            }
            else
            {
                diff_max=mid-1;
                
            }
            
        }
        return ans;
      // Write your code here
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends