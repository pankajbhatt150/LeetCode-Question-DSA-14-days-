// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
            sort(arr, arr+n);
     
     int res=arr[n-1]-arr[0];
     
     int l=arr[n-1]-k;
     int s=arr[0]+k;
     
     int mx,mn;
     
     for(int i=0; i<n; ++i){
         
         mx=max(l,arr[i]+k);
         mn=min(s, arr[i+1]-k);
         
         if(mn<0) continue;
         
         res=min(res,mx-mn);
     }
     
     return res;
        // code here
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends