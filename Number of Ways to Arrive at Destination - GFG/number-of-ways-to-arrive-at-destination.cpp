//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countPaths(int n, vector<vector<int>>& roads) {
         vector<pair<int,int>>adj[n];
        for(auto i: roads) {
            int u = i[0], v = i[1], tm = i[2];
            adj[u].push_back({v,tm});
            adj[v].push_back({u,tm});
        }
        
        long long mod = 1000000007;
        priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0, 0});
        
        vector<int>ways(n), time(n,1e9);
        time[0] = 0;
        ways[0] = 1;
        
        while(!pq.empty()) {
            auto p = pq.top();
            pq.pop();
            
            int d = p.first, u = p.second;
            for(auto i: adj[u]) {
                int v = i.first, t = i.second;
                if(d + t < time[v]) {
                    time[v] = d + t;
                    pq.push({time[v], v});
                    ways[v] = ways[u];
                }
                else if(d + t == time[v]) {
                    ways[v] += ways[u] % mod;
                }
            }
        }
        
        return ways[n-1] % mod;   // code here
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int u, v;

        vector<vector<int>> adj;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        Solution obj;
        cout << obj.countPaths(n, adj) << "\n";
    }

    return 0;
}
// } Driver Code Ends