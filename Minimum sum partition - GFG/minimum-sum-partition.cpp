//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	    int sum=0;
	    for(int i=0;i<n;i++)sum+=arr[i];
	    vector<int>dp(sum/2+1,0);
	    vector<int>v(sum/2+1,0);
	    dp[0]=1;
	    int ans=sum;
	    for(int i=0;i<n;i++)
	    {
	        v=dp;
	        for(int j=0;j<=(sum)/2;j++){
	            if(v[j]&&j+arr[i]<=(sum)/2){
	                dp[j+arr[i]]=1;;
	                ans=min(ans,sum-2*(j+arr[i]));
	            }
	        }
	    }
	    return ans;// Your code goes here
	}
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends