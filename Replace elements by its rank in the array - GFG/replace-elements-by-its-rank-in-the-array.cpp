//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:

    vector<int> replaceWithRank(vector<int> &arr, int N){

 priority_queue<int,vector<int>,greater<int>>pq;
        unordered_map<int,int>mp;
        for(int i = 0; i<N; i++)
        {
            pq.push(arr[i]);
        }
        int p=1;
        while(pq.size()>0)
        {
            mp.insert({pq.top(),p});
            int k = pq.top();
            pq.pop();
            if(k<pq.top()) p++;
        }
        vector<int>res(N);
        for (int i = 0; i < N; i++)
        {
            res[i]=mp[arr[i]];
            
        }
        return res;
    }

};


//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while(t--){
        //Input

       int n; cin >> n;
       vector<int> vec(n);
       for(int i = 0;i<n;i++) cin >> vec[i];

        Solution obj;
        vector<int> ans = obj.replaceWithRank(vec,n);
        for(int i = 0;i<n;i++) cout << ans[i] << " ";
        cout << endl;
        

        
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends