//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int subarrayCount(vector<int> &arr, int N, int k) {
        // code here
        unordered_map<int,int>m;
        int j=0,bound=0;
        int ans=0;
        for(int i=0;i<N;i++)
        {
            m[arr[i]]=max(m[arr[i]],i);
            while(m.size()==k){
                if(m[arr[j]]==j){
                    break;
                }
                j++;
            }
            if(m.size()>k){
                m.erase(arr[j]);
                j++;
                bound=j;
                while(m[arr[j]]!=j){
                    if(m[arr[j]]==j){
                        break;
                    }
                    j++;
                }
                
            }
            if(m.size()==k)ans+=(j-bound+1);
        }
        return ans;
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, k;
        cin >> N >> k;

        vector<int> arr(N);
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution obj;
        cout << obj.subarrayCount(arr, N, k) << endl;
    }
    return 0;
}
// } Driver Code Ends