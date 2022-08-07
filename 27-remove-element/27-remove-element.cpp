class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int left=-1,right=0,k=0;
    
    while(left<right && right<nums.size())
    {
        if(nums[right]==val)
            right++;
        else
        {
            nums[++left]=nums[right++];
            k++;
        }
            
    }
    
    return k;
  
    }
};