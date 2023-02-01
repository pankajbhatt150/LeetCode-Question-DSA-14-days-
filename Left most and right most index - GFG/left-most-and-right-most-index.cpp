//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
      long long res1=-1;
      long long start1=0;
      long long end1=v.size()-1;
      while(start1<=end1)
      {
           long long mid= start1+((end1-start1)/2);
          if(v[mid]==x){
              end1=mid-1;
              res1=mid;
          }
          else if(v[mid]>x){
              end1=mid-1;
          }
          else
          start1=mid+1;
      }
      long long res2=-1;
      long long start2=0;
      long long end2 = v.size()-1;
      while(start2<=end2){
           long long mid= start2+((end2-start2)/2);
          if(v[mid]==x){
              start2=mid+1;
              res2=mid;
          }
          else if(v[mid]>x){
              end2=mid-1;
              
          }
          else
          start2=mid+1;
      }
        pair<long,long>result =make_pair(res1,res2);

            return result;
      // code here
    }
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends