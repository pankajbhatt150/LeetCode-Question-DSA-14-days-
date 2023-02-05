//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int searchInsertK(vector<int>Arr, int N, int k)
    {
     int low=0,high=N-1,mid,index=N;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(Arr[mid]==k)
                return mid;
            else if(Arr[mid]<k)
                low=mid+1;
            else
                high=mid-1,index=mid;
        }
        return index;   // code here
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int>Arr(N);
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends