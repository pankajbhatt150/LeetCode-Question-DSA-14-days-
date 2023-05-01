//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string S){
        //code
        vector<int>v(256,-1);
        int j=0;
        int ans=INT_MIN;
        for(int i=0;i<S.length();i++)
        {
            j=max(j,v[S[i]]+1);
            
            ans=max(ans,i-j+1);
            v[S[i]]=i;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends