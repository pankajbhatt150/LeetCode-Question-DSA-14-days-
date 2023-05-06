//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
     unordered_map<char , int>mp;
        int start = 0 , end = 0 , ans = -1;
        while(end < s.length()){
            mp[s[end]]++;
            if(mp.size() == k){
                ans = max(ans , (end - start)+1);
                end++;
            }else if(mp.size() < k){
                end++;
            }else{
                while(mp.size() > k){
                    mp[s[start]]--;
                    if(mp[s[start]] == 0)
                        mp.erase(s[start]);
                    start++;
                }
                end++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends