//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    int numberOfSubarrays(vector<int>& arr, int N, int target){
        // code here
        int start = 0, end = 0, ans = 0, sum = 0;

        while(end<N){

            if(sum<target){

                sum = sum + arr[end];

                if(sum==target){

                    ans++;

                }

                end++;

            }else{

                if(arr[end]==1){

                    while(arr[start]==0&&start<end){

                        start++;

                        ans++;

                    }

                    sum--;start++;

                    sum = sum + arr[end];ans++;end++;

                }else{

                    int i = start;

                    while(arr[i]!=1){

                        i++;ans++;

                    }

                    end++;ans++;

                }

            }

        }

        while(start<end&&arr[start]!=1){

            if(sum==target){

                ans++;

            }

            start++;

        }

        return ans;
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
        int target; 
        cin >> target;
        vector<int> arr(N);
        for(int i=0; i<N; i++)
            cin >> arr[i];
        Solution obj;
        cout<<obj.numberOfSubarrays(arr, N, target)<<endl;
    }
    return 0;
}
// } Driver Code Ends