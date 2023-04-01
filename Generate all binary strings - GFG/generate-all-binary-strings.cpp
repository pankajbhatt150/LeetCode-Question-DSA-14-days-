//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void generateBinaryStrings(int num){
        int n=num;

         queue<string>q;

         q.push("0");

         q.push("1");

         while(!q.empty())

         {

             string s=q.front();

             if(s.length()==n)cout<<s<<" ";

             else{

                   q.push(s+'0');

             if(s[s.length()-1]!='1')q.push(s+'1');

             }

           

             q.pop();

         }
        //Write your code
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        obj.generateBinaryStrings(n);
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends