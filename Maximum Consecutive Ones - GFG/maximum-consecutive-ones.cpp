//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int longestOnes(int n, vector<int>& nums, int k) {
        // Code here
        int i=0,j=0,ans=INT_MIN,count_Zero=0;
       
        while(j<n)
        {
            if(nums[j]==0){
               count_Zero++;
            }
            while(count_Zero>k)
            {
                if(nums[i]==0){
                    count_Zero--;
                }
                i++;
            }
           ans=max(ans,j-i+1);
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
        int n;
        cin >> n;
        vector<int> nums;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            nums.push_back(x);
        }

        int k;
        cin >> k;

        Solution obj;
        cout << obj.longestOnes(n, nums, k) << endl;
    }
    return 0;
}
// } Driver Code Ends