class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum =0; int maxsum=0;
        for(int i=1;i<prices.size();i++){
            sum +=prices[i]-prices[i-1];
             sum = max(sum,0);
             maxsum = max(maxsum, sum);
           
    }
   return maxsum;
}


};