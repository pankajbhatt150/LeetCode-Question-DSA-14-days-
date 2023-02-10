//{ Driver Code Starts
// C++ program to find largest subarray sum with
// at-least k elements in it.
#include <bits/stdc++.h>
using namespace std;

long long int maxSumWithK(long long int a[], long long int n, long long int k);

// Driver code
int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, k, i;
        cin >> n;
        long long int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> k;
        cout << maxSumWithK(a, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends


long long int maxSumWithK(long long int a[], long long int n, long long int k) 
{
 vector<long long int> kad;
    long long int sum=0,tsum=0;
    for(long long int i=0;i<n;i++){  // Kadane algorithm
        sum+=a[i];
        if(a[i]>sum) sum=a[i];
        kad.push_back(sum);  // till every index max. subarray sum
    }
    sum=0;
    long long int maxi=INT_MIN;
    long long int i=0,j=0;
    while(j<n){   // sliding window of size k subarray.
        sum+=a[j];
        if(j-i+1<k) j++;
        else if(j-i+1==k){
            if(i>0) tsum=max(sum,sum+kad[i-1]);
            else tsum=sum;
            maxi=max(maxi,tsum);
            sum-=a[i];
            i++;
            j++;
        }
    }
    return maxi;    
}