class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
     int n=nums.size();
		int l,m,r;
		l=m=r=INT_MAX;
		for(int i=0;i<n;i++){
			if(nums[i]<=l)l=nums[i];
			else if(nums[i]<=m) m=nums[i];
			else return true;
		}
		return false;   
    }
};