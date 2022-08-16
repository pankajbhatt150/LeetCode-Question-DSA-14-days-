class Solution {
public:
    int myAtoi(string s) {
    bool flag = true;
         int no = 0 ;
        int  j = 0;
    while( j < s.size() && s[j] == ' ')
                  j++;
          if( j < s.size() && s[j]== '-')
        {
            flag = false;
             j++;
          }
              else if( j < s.size() && s[j]=='+')
        {
                  j++;
        }
            
             while( j < s.size() && isdigit(s[j]))
            {  
                int x = s[j] - '0'; 
                 if((INT_MAX - x)/10 < no)
                 {
                     if(flag) return INT_MAX;
                     else
                         return INT_MIN;
                 }
                 no = 10*no + x;
                 
                 j++;
            }
        
        if(flag == false) return -no;
        return no;
    }  
};