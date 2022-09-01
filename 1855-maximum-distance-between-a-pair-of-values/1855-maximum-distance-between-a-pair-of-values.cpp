class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
      int i=0,j=0,res=0,n=nums1.size(),m=nums2.size();
        while(i<n && j<m)
        {
            if(nums1[i]>nums2[j])
                i++;
            else
                res=max(res,j++-i);
        }
        return res;
    }
};