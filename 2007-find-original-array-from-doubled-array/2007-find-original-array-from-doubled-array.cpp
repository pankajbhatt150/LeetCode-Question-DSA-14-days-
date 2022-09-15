class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
          int n=changed.size();
        vector<int> res;
        unordered_map<int,int> mp;
        if(n%2==1)
            return res;
        for(auto it:changed)
            mp[it]++;

        sort(changed.begin(),changed.end());
        for(auto &i : changed)
        {
            if(mp[i]&& mp[2*i])
            {
                mp[i]--;
                mp[2*i]--;
                res.push_back(i);
            }      
        }
        for(auto &it : mp)
        {
            if(it.second)
                return {};
        }
        return res;    
    }
};