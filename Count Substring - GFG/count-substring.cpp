//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countSubstring(string s) {
        // Code here
        int left = 0 , right = 0 , end = s.size() - 1;
        unordered_map<char,int> map;
        
        int count = 0;
        
        while(right != s.size())
        {
            map[s[right]] += 1; // adding new element to window
            
            while(map['a'] and map['b'] and map['c']) // while(window is good)
            {
                count += 1 + (end - right);
                
				// removing first element[means shrinking window from front to form new window]
                map[s[left]] -= 1; 
                left++;
            }
            right++;
        }
        return count;

    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution obj;
        cout << obj.countSubstring(s) << endl;
    }
    return 0;
}
// } Driver Code Ends