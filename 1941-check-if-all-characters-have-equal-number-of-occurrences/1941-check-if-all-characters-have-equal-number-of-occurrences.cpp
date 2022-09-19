class Solution {
public:
    bool areOccurrencesEqual(string s) {
     unordered_map<char,int> mp;
        int len=s.length();
        for(int i=0;i<len;i++)
        {
            mp[s[i]]++;
        }
        
        int val=mp[s[0]];
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second!=val)
                return false;
        }
        return true;   
    }
};