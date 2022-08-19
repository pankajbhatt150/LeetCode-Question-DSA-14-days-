class Solution {
public:
    int strStr(string haystack, string needle) {
        
       if(needle.size()==0) return 0;
        if(needle.size()>=haystack.size() and needle!=haystack) return -1;
        else if(needle==haystack) return 0;
        
        int next=needle.size();
        //cout<<(haystack.substr(2, next));
        for(int i=0;i<haystack.size()-needle.size()+1;i++)
        {
            
            if(haystack.substr(i, next)==needle) {
                return i;
                //cout<<haystack.substr(i, next);
            }
        }
        return -1;
    }
};