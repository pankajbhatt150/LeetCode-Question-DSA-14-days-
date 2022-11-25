//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int knapSack(int N, int W, int val[], int wt[])
    {
     
        vector<int> prev(W+1, 0);

        vector<int> cur(W+1, 0);

        prev[0] = 0;

        for (int weight= 0; weight<=W; weight++){ 

            prev[weight] = val[0] * (weight/wt[0]);

        }

        for (int index=1; index<N; index++) {

            for (int weight= 0; weight<W+1; weight++) {

                int notPickProfit = prev[weight];

                int pickProfit = -1e9;

                if (weight >= wt[index])

                    pickProfit = val[index] + cur[weight-wt[index]];

        

                cur[weight] = max(notPickProfit, pickProfit);

            }

            prev = cur;

        }

        

        return prev[W];// code here
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends