class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int n = matrix.size(); 
     int m = matrix[0].size(); 
    
        int left = 0;
        int right = n*m - 1;

        while(left <= right)
		{
            int mid = left + (right-left)/2;

            if(matrix[mid/m][mid%m] < target)
                {
                left = mid+1;
                }
            else if(matrix[mid/m][mid%m] > target) 
                {
                right = mid-1;
                }
            else 
                return true;
        }
    return false;
    }
};