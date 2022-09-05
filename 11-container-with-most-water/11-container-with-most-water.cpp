class Solution {
public:
    int maxArea(vector<int>& height) {
       int l=0, r=height.size()-1;
        int ans=0, curr=0;
        while(l<r){
            curr = min(height[l], height[r])*(r-l);
            ans = max(ans, curr);
            if(height[l]>height[r]){
                r--;
            }
            else{
                l++;
            }
        }
        return ans;  
    }
};