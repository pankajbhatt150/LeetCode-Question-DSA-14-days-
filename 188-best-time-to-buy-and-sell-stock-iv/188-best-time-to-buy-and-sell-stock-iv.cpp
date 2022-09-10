class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
      // IF prices size <= 1 or k == 0 then no work has to be done
        if(k == 0 || prices.size() <= 1)
            return 0;
        int n = prices.size();
        
        // if k >= n
        if(2 * k > n)
        {
            int ans = 0;
            for(int i = 1; i < n; ++i)
            {
                if(prices[i] > prices[i - 1])
                    ans += (prices[i] - prices[i - 1]);
            }
            return ans;
        }
        
        // if 1 <= k <= n
        int dp[(2 * k) + 1];
        dp[0] = -prices[0];
        for(int i = 1; i <= 2*k; ++i)
        {
            if(i % 2 == 0)          // Setting it for buying part
                dp[i] = INT_MIN;
            else                    // Setting it for selling part
                dp[i] = 0;
        }
        for(int i = 0 ; i < n; ++i)
        {
            for(int j = 0 ; j <= 2*k; ++j)
            {
                if(j == 0)
                    dp[j] = max(dp[j], -prices[i]);
                else if(j % 2 == 0)                 // BUY 
                    dp[j] = max(dp[j], dp[j - 1] - prices[i]);
                else                                      // SELL
                    dp[j] = max(dp[j], dp[j - 1] + prices[i]);
            }
        }
        return dp[2*k - 1];   
    }
};