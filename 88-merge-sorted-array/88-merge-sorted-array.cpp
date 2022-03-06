class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0;i<n;i++){
            nums1[m+i] = nums2[i];
        }
  sort(nums1.begin(), nums1.end());
        nums1;
    }
};
    
    
    /*
      int i=0,j=0,k=0;
        while(j<m && k<n){
            if(nums1[j] <= nums2[k]){
                nums1[i++] = nums2[j++];
            }else{
                nums1[i++] = nums2[k++];
            }
        }
        while(j<m){
            nums1[i++] = nums2[j++];
        }
        while(k<n){
            nums1[i++] = nums2[k++];
        }
    }*/

