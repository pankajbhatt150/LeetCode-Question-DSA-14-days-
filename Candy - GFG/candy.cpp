//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minCandy(int N, vector<int> &ratings) {
       int n=ratings.size();
        // int c=0;
        vector<int>c(n);
        
       for(int i=0;i<n;i++){
           c[i]=1;
       }
        
        
      
        int sum=0;
        for(int i=0;i<n;i++){
            if(i-1>=0 && ratings[i]>ratings[i-1] &&i+1<=n-1 && ratings[i]>ratings[i+1]){
                c[i]=max(c[i-1],c[i+1] ) +1;
            }
            
            else if(i-1>=0 && ratings[i]>ratings[i-1]){
                c[i]=c[i-1]+1;
            }
            else if(i+1<n && ratings[i]>ratings[i+1]){
                c[i]=c[i+1]+1;
            }
        }
        
          for(int i=n-1;i>=0;i--){
            if(i-1>=0 && ratings[i]>ratings[i-1] &&i+1<=n-1 && ratings[i]>ratings[i+1]){
                c[i]=max(c[i-1],c[i+1] ) +1;
            }
            
            else if(i-1>=0 && ratings[i]>ratings[i-1]){
                c[i]=c[i-1]+1;
            }
            else if(i+1<n && ratings[i]>ratings[i+1]){
                c[i]=c[i+1]+1;
            }
        }
        
        for(auto it:c)
     {   sum+=it;
    //   cout<<it<<" ";  
        
    }
        
        
        
        return sum;  
        // code here
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> ratings(N);
        for (int i = 0; i < N; i++) {
            cin >> ratings[i];
        }
        Solution obj;
        cout << obj.minCandy(N, ratings) << endl;
    }
    return 0;
}
// } Driver Code Ends