//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
     void maxHeapify(vector<int> &arr, int N, int i){ 
        // i is the parent element index
        int l = 2*i+1; // left child index
        int r = 2*i+2; // right child index
        int largest = i;  // initial the largest element with parent index
        
        // Find the largest element index among parent, left, right element
        if(l<N && arr[l]>arr[largest]) largest = l;
        if(r<N && arr[r]>arr[largest]) largest = r;
        
        if(largest!=i){
            swap(arr[i],arr[largest]);   // set the parent index to laregst element
            
            // ith element is largest 
            // l or r is updated to smaller one, so we may further need to downshift it. 
            maxHeapify(arr,N,largest);
        }
        
        
    }
    void convertMinToMaxHeap(vector<int> &arr, int N){
        
        // here we are building the heap from bottom to top
        
        // so we are starting from floor[(n-2)/2] last parent (bottom rightmost) with atleast one child to save n/2 uneccesarry operations
        for(int i=(N-2)/2; i>=0; i--){
            maxHeapify(arr,N,i);
        }
    }
    
};


//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while(t--){
        //Input

       int n; cin >> n;
       vector<int> vec(n);
       for(int i = 0;i<n;i++) cin >> vec[i];

        Solution obj;
        obj.convertMinToMaxHeap(vec,n);
        for(int i = 0;i<n;i++) cout << vec[i] << " ";
        cout << endl;
        

        
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends