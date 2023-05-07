//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string minWindow(string str1, string str2) {
        // Write your Code here
        int n1 = str1.length();
        int n2 = str2.length();
        
         // st = initial index of required string in str1
        // end = length of that string
        int st = 0, end = INT_MAX;
        
        int i = 0;
        for(int j = 0; j < n1; j++){
            if(str1[j] == str2[i])i++;
            if(i == n2){
                int l1 = j, l2 = i-1;
                while(l2 >= 0){
                    if(str1[l1--] == str2[l2]) l2--;
                }
                if(j - l1 + 1 < end){
                    end = j - (st = l1 + 1) + 1;
                }
            }
        }
        return end == INT_MAX ? "" : str1.substr(st, end);
    }
};


//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string str1, str2;
        cin >> str1 >> str2;

        Solution obj;
        cout << obj.minWindow(str1, str2) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends