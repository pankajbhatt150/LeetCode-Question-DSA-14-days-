//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    public:
 bool blommed(int mid, int M, int K, vector<int> &bloomDay)
    {
        int cnt = 0;
        int bouquets = 0;
        for(int i = 0; i<bloomDay.size(); i++)
        {
            if( bloomDay[i] <= mid ) 
            {
                cnt++; 
                if(cnt == K)
                { 
                    cnt = 0; 
                    bouquets++;
                    if(bouquets>=M) { return true; }
                }
            } else { cnt = 0; }
        }
        return bouquets >= M;
    }
    int solve(int M, int K, vector<int> &bloomDay){
        double total = M * K, n = bloomDay.size();
        if(total > n) return -1;
      int low = 1, high = 1000000000;
      int ans = -1;
      while(low <= high)
      {
          int mid = low + (high-low)/2;
          if(blommed(mid,M,K,bloomDay) == true)
          { ans = mid; high = mid - 1; }
          else { low = mid+1; }
      }
      return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, k;
    cin >> m >> k;
    string s;
    getline(cin, s);
    getline(cin, s);
    int n = s.length();
    int num = 0;
    bool f = 0;
    vector<int> bloomDay;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == ' ')
      {
        if (!f)
          continue;
        bloomDay.push_back(num);
        num = 0;
        f = 0;
      }
      else
      {
        num = (num * 10) + (s[i] - '0');
        f = 1;
      }
    }
    if (f)
    {
      bloomDay.push_back(num);
    }
    Solution obj;
    cout<<obj.solve(m, k, bloomDay)<<endl;
    }
    return 0;
}
// } Driver Code Ends