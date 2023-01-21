//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	bool isBipartite(int V, vector<int>adj[]){
	   vector<int>color(V,0);
	    queue<pair<int,int>>q;
	    for(int i=0;i<V;i++){
	        if(!color[i]){
	            q.push({i,1});
	            while(!q.empty()){
	                int node=q.front().first;
	                int Pcolor=q.front().second;
	                q.pop();
	                for(auto it:adj[node]){
	                    if(!color[it]){
	                        color[it]=Pcolor==1?2:1;
	                        q.push({it,Pcolor==1?2:1});
	                    }else if(color[it]==Pcolor){
	                        return 0;
	                    }
	                }
	            }
	        }
	    }return 1; // Code here
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}
// } Driver Code Ends