class Solution {
public:
    int maxArea(vector<int>& height) {
         int ans = 0;
        int i=0, j = height.size() - 1;
        while(i < j){
            int a = min(height[i], height[j]);
            ans = max(ans, (j-i)*a);
            while(height[i] <= a && i<j)
                i++;
            while(height[j] <= a && i<j)
                j--;
        }
        return ans;
       
        
    }
};