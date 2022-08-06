class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<n-2;i++){
            int front=i+1,back=n-1;
            while(front<back){
                int sum=nums[front]+nums[back];
                if(sum+nums[i]>0){
                    back--;
                }
                else if(sum+nums[i]<0){
                    front++;
                }
                else{
                    vector<int> triplet={nums[i],nums[front],nums[back]};
                    ans.push_back(triplet);
                    while(front<back && nums[front]==triplet[1])front++;
                    while(front<back && nums[back]==triplet[2])back--;
                }
            }
            while(nums[i+1]==nums[i] && i<n-2)i++;
        }
        return ans;
     
    }
};