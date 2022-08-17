class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
       string v;
		//compare first string with every other string in strs
        for(int i=0;i<strs[0].length();i++){
            char ch = strs[0][i];
            bool flag = true;
            for(int j=1;j<strs.size();j++){
				//if not same or string length less than first string , break.
                if(strs[j][i]!= ch || strs[j].size()<i){
                    flag = false;
                    break;
                }
            }
            if(flag==false){
                break;
            }
            else{
                v+=ch;
            }
        }
        return v;
        
    }
};