//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
      int n=s1.length();
        int n1=s2.length();
        if(n!=n1)
        return false;
        
        if(s1==s2)
        return true;
        
        for(int i=0;i<n;i++){
            char ch=s1[0];
            s1.erase(0,1);
            s1.push_back(ch);
            if(s1==s2)
            return true;
        }
        return false;   // Your code here
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}

// } Driver Code Ends