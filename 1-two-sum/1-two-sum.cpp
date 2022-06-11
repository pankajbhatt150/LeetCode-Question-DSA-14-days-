class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        
        for(int i = 0; i < nums.size(); i++) {
            if(map.find(nums[i]) != map.end())
                return {i, map[nums[i]]};
            map[target - nums[i]] = i;
        }
        
        return {0, 0};
    }
};