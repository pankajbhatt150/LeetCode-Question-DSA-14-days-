class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      unordered_map<int,int>map;
        int n= nums.size();
    
    for(int i=0;i<n;i++){
        map[nums[i]]++;
    }
    
    for(int i=0;i<n;i++){
        if(map[nums[i]]>1){
            return nums[i];
        }
    }
    
    return 0;
}   
    
};

