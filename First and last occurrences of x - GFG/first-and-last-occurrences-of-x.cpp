//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
     int s=0;

    int end=n-1;

    int firstocc=-1;

    vector<int>v;

    while(s<=end){

         int mid= s+(end-s)/2;

        if(arr[mid]==x) {

        firstocc=mid;

        end= mid-1;    

        }

        else if(arr[mid]<x){s= mid +1; }

        else {end = mid-1; }

    } 

    //lastocc

    s=0;

    end=n-1;

    // int mid= s+(end-s)/2;

    int lastocc=-1;

    while(s<=end){

         int mid= s+(end-s)/2;

        if(arr[mid]==x) {

        lastocc=mid;

        s= mid+1;    

        }

        else if(arr[mid]<x){s= mid +1; }

        else   {

            end = mid-1; }

    }

    v.push_back(firstocc);

    v.push_back(lastocc);

    return v;
    
    // code here
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends