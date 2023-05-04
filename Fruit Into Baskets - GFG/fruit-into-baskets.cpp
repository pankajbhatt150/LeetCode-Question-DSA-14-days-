//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int totalFruits(int N, vector<int> &fruits) {
           int start=fruits[0],cur_start=-1,start_ind=0,end_ind=-1,end=-1,i=0,cnt=0;
       while(i<N)
       {
           if(fruits[i]==start||fruits[i]==end)
           {
               cur_start=i;//cur_start denotes we can again start from cur_start if we get third type of fruit
               int temp=fruits[i];
           while(i<N&&fruits[i]==temp)
           {
               cnt=max(cnt,i-start_ind+1);
               i++;
           }
           }
           else if(end==-1) {
               end=fruits[i];
               end_ind=i;
           }
          else{
              start_ind=cur_start;
              start=fruits[cur_start];
              end_ind=i;
              end=fruits[i];
          }
       }
       return cnt;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> fruits(N);
        for (int i = 0; i < N; i++) cin >> fruits[i];
        Solution obj;
        cout << obj.totalFruits(N, fruits) << endl;
    }
    return 0;
}

// } Driver Code Ends