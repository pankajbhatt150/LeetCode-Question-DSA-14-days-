//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        int temp=0;         //to keep track of fullstops
        reverse(S.begin(),S.end()); //this will reverse the string
        for(int i=0;i<S.length();i++){
                if(S[i]=='.'){
        reverse(S.begin()+temp,S.begin()+i);     //this will reverse every word in reversed string b/w every fullstop      
        temp=i+1;
                }       
        }
        reverse(S.begin()+temp,S.end()); //this is to reverse last word 
        
        
        return S;   // code here 
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends