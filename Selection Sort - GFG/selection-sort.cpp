//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


// } Driver Code Ends
class Solution
{
    public:
    int select(int arr[], int i)
    {
     int max_ele_pos = i;
    for(int j=0;j<i;j++){
        if(arr[j] > arr[max_ele_pos])
            max_ele_pos = j;
    }
    return max_ele_pos;
}
 
void selectionSort(int arr[], int n)
{
   
   for(int i=n-1;i>0;i--){
       // Find Index of Maximum element from i to n
       int max_ele_pos = select(arr,i);
       // Swap currentIndex element with Maximum element index
       int temp = arr[i];
       arr[i] = arr[max_ele_pos];
       arr[max_ele_pos] = temp;
   }
}
};

//{ Driver Code Starts.
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;
  
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      
    Solution ob;  
    ob.selectionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends