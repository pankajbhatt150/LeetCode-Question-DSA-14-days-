//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
      bool isPossible(int arr[],int d,int n,int mid)

    {

        long long int s=0,ans=1;

        for(int i=0;i<n;i++)

        {

            s+=arr[i];

            if(s>mid)

            {

                ans++;

                s=arr[i];

            }

            if(ans>d || arr[i]>mid)

            {

                return false;

            }

         }

        

             return true;

    }

    

    int leastWeightCapacity(int arr[], int N, int D) {

        // code here

        int s=1,e=50000000,m,ans;

        while(s<=e)

        {

            m=s+(e-s)/2;

            if(isPossible(arr,D,N,m))

            {

                ans=m;

                e=m-1;

            }

            else

            {

                s=m+1;

            }

        }

        

        return ans;  // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,D;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr,N,D) << endl;
    }
    return 0;
}
// } Driver Code Ends