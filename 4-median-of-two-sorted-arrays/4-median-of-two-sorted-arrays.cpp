class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
     if(nums1.size() > nums2.size())swap(nums1,nums2);
        int n = nums1.size(),m = nums2.size();
        int low = 0, high = n;
        while(low <= high){
            int mid1 = low + (high-low)/2;
            int mid2 = (n+m)/2-mid1;
            
            double l1 = mid1 == 0 ? INT_MIN:nums1[mid1-1];
            double l2 = mid2 == 0 ? INT_MIN:nums2[mid2-1];
            double r1 = mid1 == n ? INT_MAX:nums1[mid1];
            double r2 = mid2 == m ? INT_MAX:nums2[mid2];
            if(l1 > r2)
                high = mid1-1;
            else if(l2 > r1)
                low = mid1+1;
            else
                return (n+m) % 2 ? min(r1,r2):(max(l1,l2)+min(r1,r2))/2;
        }
        return -1;
       
    }
};