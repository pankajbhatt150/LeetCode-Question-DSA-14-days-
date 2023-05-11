//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
      int n = s.length();
        int m = p.length();
        
        if (m > n) {
            return "-1";
        }
        
        // frequency arrays for s and p
        int sFreq[26] = {0};
        int pFreq[26] = {0};
        
        // update p's frequency array
        for (int i = 0; i < m; i++) {
            pFreq[p[i] - 'a']++;
        }
        
        int start = 0, end = 0;
        int count = 0;
        int minLength = INT_MAX;
        int startIndex = -1;
        
        // iterate through s
        while (end < n) {
            // update s's frequency array
            sFreq[s[end] - 'a']++;
            // if the frequency of the current character in s is <= the frequency in p
            // increment the count of characters that match between s and p
            if (sFreq[s[end] - 'a'] <= pFreq[s[end] - 'a']) {
                count++;
            }
            
            // if all characters from p are in the current window
            if (count == m) {
                // move the start pointer until we have all characters from p in the window
                while (sFreq[s[start] - 'a'] > pFreq[s[start] - 'a'] || pFreq[s[start] - 'a'] == 0) {
                    sFreq[s[start] - 'a']--;
                    start++;
                }
                
                // update the minimum window length
                int windowLength = end - start + 1;
                if (windowLength < minLength) {
                    minLength = windowLength;
                    startIndex = start;
                }
            }
            
            end++;
        }
        
        // return the minimum window substring
        if (startIndex == -1) {
            return "-1";
        } else {
            return s.substr(startIndex, minLength);
        }  // Your code here
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends