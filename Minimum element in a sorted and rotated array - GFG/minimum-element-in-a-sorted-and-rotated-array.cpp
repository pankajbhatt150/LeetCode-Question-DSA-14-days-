//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int findMin(int arr[], int n){
        int low = 0,high = n-1;
        
        if(arr[low]<arr[low+1]&& arr[low]<arr[high]){
            return arr[low];
        }
        
        while(low<=high){
            int mid = low+(high-low)/2;
            
            if(arr[mid]<arr[mid-1]){
                return arr[mid];
            }
            if(arr[mid]>arr[high]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        //complete the function here
    }
};

//{ Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}
// } Driver Code Ends