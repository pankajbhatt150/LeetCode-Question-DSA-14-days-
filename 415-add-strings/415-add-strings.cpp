class Solution {
public:
    string addStrings(string num1, string num2) {
             string ans=""; 
        int n=num1.size(),m=num2.size();
        int i=n-1,j=m-1;
        
        int carry=0;
        while(i>=0 || j>=0 || carry!=0)
        {
            int ival=i>=0?num1[i]-'0':0;
            int jval=j>=0?num2[j]-'0':0;
            i--;j--;
            int sum=ival+jval+carry;
            
            ans.push_back((sum%10)+'0');
            carry=sum/10;
            
        }
        reverse(ans.begin(),ans.end());
        return ans;

        
        
        
    }
};