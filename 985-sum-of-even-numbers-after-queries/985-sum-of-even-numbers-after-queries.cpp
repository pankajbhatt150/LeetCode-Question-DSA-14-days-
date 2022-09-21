class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
     //First Calculate Sum OF All Evene Values Only 
        int evensum = 0;
         vector<int> ans;
        
        for(auto i : nums)
        {     
            if(i%2 == 0)
                evensum  += i;
        }
        
        for(int i = 0 ; i<queries.size() ; i++)
        {
		   // Check Whether The Value of Given particular Nums at index from query is odd or even
            if(nums[queries[i][1]] & 1)
            {
			 // if nums[index] is also odd and  value to be added is also odd than add the nums[index] and val in evensum
               if(queries[i][0]&1)
               {
                  evensum += nums[queries[i][1]] + queries[i][0];
               }
            }
            else
            {
			// If nums[idex] is even 
			
			// If value to be added is odd than substract the nums[index] because it will change to odd 
                if(queries[i][0]&1)
                   evensum -= nums[queries[i][1]];
		   // If value to be added is even than add the val only in evensum
                else
                    evensum += queries[i][0];
            }
			// update The Nums[index]
            nums[queries[i][1]] += queries[i][0];
			
			// Store Nums
            ans.push_back(evensum);
        }
        
        return ans;   
    }
};