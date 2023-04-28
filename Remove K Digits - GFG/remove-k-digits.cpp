//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string removeKdigits(string S, int K) {
        int n=S.length();

        stack<char> st;

        for(int i=0;i<n;i++){

            char c=S[i];

            while(!st.empty() && c<st.top() && K>0){st.pop(); K--;}

            if(!st.empty() || c!=0) st.push(c);

            if(st.size()==1 && st.top()=='0') st.pop();

        }

        while(!st.empty() && K--) st.pop();

        if(st.empty()) return "0";

        string s2="";

        while(!st.empty()){

            char ss=st.top();

            st.pop();

            s2=ss+s2;

        }

        return s2;
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
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}

// } Driver Code Ends