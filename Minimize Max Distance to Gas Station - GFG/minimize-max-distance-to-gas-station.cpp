//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool isPossible(double dist,vector<int> &stations, int k){

        int stationsToAdd=0;

        for(int i=0;i<stations.size()-1;i++){

            stationsToAdd+=floor((stations[i+1]-stations[i])/dist);

        }

        return stationsToAdd<=k;

    }

    double findSmallestMaxDist(vector<int> &stations, int k) {

        // Write your code here

        double left=0,right=stations[stations.size()-1]-stations[0];

        while((right-left)>1e-6){

            double mid=left + (right-left)/2.0;

            if(isPossible(mid,stations,k))right=mid;

            else left=mid;

        }

        return left+0.000001;

    }
};

//{ Driver Code Starts.
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> stations(n);
    for (int i = 0; i < n; i++)
    {
      cin >> stations[i];
    }
    int k;
    cin >> k;
    Solution obj;
    cout << fixed << setprecision(2) << obj.findSmallestMaxDist(stations, k) << endl;
  }
  return 0;
}
// } Driver Code Ends