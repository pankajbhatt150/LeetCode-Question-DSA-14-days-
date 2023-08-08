//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countFractions(int n, int numerator[], int denominator[])
    {
       for(int i=0;i<n;i++){
            int s=__gcd(numerator[i],denominator[i]);
            numerator[i]=numerator[i]/s;
            denominator[i]=denominator[i]/s;
        }
        int c=0;
        //int 
      int sum=0;
      
     map<pair<int,int>,int>m;
     for(int i=0;i<n;i++){
        int co=denominator[i]-numerator[i];
        c+=m[{co,denominator[i]}];
        m[{numerator[i],denominator[i]}]+=1;
     }
     return c;  
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int numerator[n],denominator[n];
        for(int i=0;i<n;i++)
            cin>>numerator[i];
        for(int i=0;i<n;i++)
            cin>>denominator[i];
        Solution ob;
        int ans=ob.countFractions(n,numerator,denominator);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends