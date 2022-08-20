class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();

    int d = digits[len-1] + 1;
    
    //Adding 1 to the last element
    digits[len - 1] = d;
    
    //Checking if number at any index is 10, if so then 
    //replace that number with 0 and take carry 1
    for(int i=len-1; i>0; i--){
        while(digits[i] >= 10){
            digits[i] = 0;
            digits[i-1] += 1;
        }
    }
    
    //If the elemnt at Oth index is 10, the do following
    if(digits[0] == 10){
        digits.insert(digits.begin(), 1);
        digits[1] = 0;
    }
    return digits;

        
        
        
    }
};