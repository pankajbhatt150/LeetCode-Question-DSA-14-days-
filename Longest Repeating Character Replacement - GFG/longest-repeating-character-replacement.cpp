//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int characterReplacement(string S, int K) {
        // code here
        int i=0, j=0, ans=0, res=0;
      unordered_map<char, int>mp;
      for(i=0;i<S.size();i++){
      mp[S[i]]++;
      ans=max(ans,mp[S[i]]);
      if(i-j+1-ans>K){
          mp[S[j]]--;
          j++;
      }  
       res=max(res,i-j+1); 
        
    }
    return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;

        Solution obj;
        cout << obj.characterReplacement(S, K) << endl;
    }
    return 0;
}
// } Driver Code Ends