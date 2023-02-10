//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestDivisor(vector<int>& nums, int K) {

     int low=1,mid,res=INT_MAX;
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high)
        {
            int sum=0;
            mid=(low+high)/2;
            for(int i=0;i<nums.size();i++)
                sum+=ceil(nums[i]*1.0/mid);
            if(sum<=K)
            {
                res=mid;
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return res;   // Write your code here.
    }
};


//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        int n, k;
        cin >> n >> k;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) cin >> vec[i];

        Solution obj;
        cout << obj.smallestDivisor(vec, k) << endl;
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends