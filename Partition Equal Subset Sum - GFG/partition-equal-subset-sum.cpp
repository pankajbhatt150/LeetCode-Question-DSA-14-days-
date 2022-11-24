//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int equalPartition(int N, int arr[])
    {
       int i,j;
        int sum = 0;
        
        for(i=0;i<N;i++){
            sum += arr[i];
        }
        
        if(sum %2 != 0)
            return 0;
        j=sum/2;
        vector<vector<int>>dp(N,vector<int>(j+1,-1));
        
        return solve(0,arr,N, j,dp);
        
        
    }
    
    int solve(int in,int arr[],int n, int t,vector<vector<int>>&dp){
        //cout<<in<<" "<<t<<"\n";
        if(t==0)
            return 1;
            
        if(in == n || t<0)
            return 0;
            
        if(dp[in][t]!=-1)
            return dp[in][t];
            
        if(solve(in+1,arr,n,t,dp)==1)
            return dp[in][t] = 1;
        if(solve(in+1,arr,n,t-arr[in],dp)==1)
            return dp[in][t] = 1;
            
        return dp[in][t] = 0;  // code here
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends