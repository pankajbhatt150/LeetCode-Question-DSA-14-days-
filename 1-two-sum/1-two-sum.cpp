class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a=0,b=0;
        for(int i= 0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]== target){
                    a=i;
                     b=j;
                }
                    
            }
        }
        vector<int> ans;
        ans.push_back(a);
        ans.push_back(b);
            return ans;
    }
    
    
  
   
    
};