class Solution {
public:
    bool wordPattern(string pattern, string s) {
      int ind = 0;
        int i = 0;
        string str = "";
        unordered_map<string,char> wordmap;
        unordered_map<char,string> patternmap;
        while(i<s.size()){
            if(s[i]==' '){
                if(wordmap.count(str) && wordmap[str]!=pattern[ind]){
                    return false;
                }
                if(patternmap.count(pattern[ind]) && patternmap[pattern[ind]]!=str){
                    return false;
                }
                wordmap[str] = pattern[ind];
                patternmap[pattern[ind]] = str;
                str = "";
                ind++;
            }else{
                str += s[i];
            }  
            i++;
        }
        if(wordmap.count(str) && wordmap[str]!=pattern[ind]){
                    return false;
        }
        if(patternmap.count(pattern[ind]) && patternmap[pattern[ind]]!=str){
                    return false;
        }
        if(ind != pattern.size()-1) return false;
        return true;   
        
    }
};