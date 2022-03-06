class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      int n = 0;
for(int i = 0; i < nums.size();i++){
n = i;
if(nums[i] == target)
return i;
if(nums[i] < target && nums[i] != target){
n = i+1;
}
if(nums[i] > target && nums[i] != target){
n = i;
return n;
}
}
return n;  
    }
};