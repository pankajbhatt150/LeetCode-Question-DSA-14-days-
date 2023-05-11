//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Function to return maximum XOR subset in set[]

class Solution
{
    public:
    int maxSubsetXOR(int arr[], int N)
    {
         if(N == 0) return 0;

       int num = 0;

       while(true)

       {

           //first find max element

         int maxi = INT_MIN;

         for(int i=0;i<N;i++){

             if(maxi<arr[i])

             maxi=arr[i];

         }

        //Instagram : fren._.zy

         if(maxi == 0) 

         return num;

         num = max(num,num^maxi);

         for(int i=0;i<N;i++)

         {

           arr[i] = min(arr[i],arr[i]^maxi);

         }
       } //Your code here
    }
};

//{ Driver Code Starts.
int main()
{

    int t,n,a[100004],k;
    scanf("%d",&t);
    while(t--)
    {
        //cin>>n;
       scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        Solution obj;
        printf("%d\n",obj.maxSubsetXOR(a,n));
       // cout<<bin(a,0,n-1,k)<<endl;
    }
}
// } Driver Code Ends