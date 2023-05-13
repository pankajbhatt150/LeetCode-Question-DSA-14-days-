//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int leastInterval(int N, int K, vector<char> &tasks) {
        vector<int> arr(26,0);
        for(auto it: tasks) arr[it-'A']++;
        priority_queue<int> pq;
        queue<pair<int,int>> q;
        
        for(auto it: arr) if(it > 0) pq.push(it);
        int time=0;
        
        while(pq.size() > 0 || q.size() > 0) {
            time++;
            
            if(q.size() > 0 && q.front().second==time) {
                pq.push(q.front().first);
                q.pop();
            }
            
            if(pq.size() > 0) {
                int remain = pq.top()-1;
                if(remain > 0) q.push({remain, time+K+1});
                pq.pop();
            }
        }
        
        return time;
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<char> tasks(N);
        for (int i = 0; i < N; i++) cin >> tasks[i];

        Solution obj;
        cout << obj.leastInterval(N, K, tasks) << endl;
    }
    return 0;
}
// } Driver Code Ends