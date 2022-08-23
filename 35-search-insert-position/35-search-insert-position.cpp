class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
     int i = 0, j = nums.size()-1;
        while(i <= j)
        {
            int m = (i + j) / 2;
            if(nums[m] == target)
                return m;
            if(target < nums[m])
                j = m-1; 
            else
                i = m + 1;
        }
        return i;  }    
};