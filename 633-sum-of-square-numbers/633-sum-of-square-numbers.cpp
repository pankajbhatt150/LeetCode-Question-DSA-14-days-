class Solution {
public:
    bool judgeSquareSum(int c) {
      long long num = c;
        int i = 0;
        int j = sqrt(c);
        long long curr;
        while(i<=j){
            curr = (long long)i*i+(long long)j*j;
            if(curr<c){
                i++;
            }
            else if(curr>c) j--;
            else return true;
        }
        return false;   
    }
};