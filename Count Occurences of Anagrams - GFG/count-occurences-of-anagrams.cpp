//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int n=txt.length();
	    int k= pat.length();
	    int ans=0;
	    vector<int>hashPat(26,0);
	    for(int i=0;i<k;i++){
	        hashPat[pat[i]-'a']++;
	    }
	    vector<int>hashtxt(26,0);
	    int i=0, j=0;
	    while(j<n){
	        hashtxt[txt[j]-'a']++;
	        if(j-i+1==k){
	            if(hashtxt==hashPat)
	            ans++;
	            hashtxt[txt[i]-'a']--;
	            i++;
	        }
	        j++;
	    }
	    return ans;
	    
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends