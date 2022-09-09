class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
      int n=properties.size();
        vector<pair<int,int>> prtn;
        for(int i=0;i<n;i++){
            prtn.push_back(make_pair(properties[i][0],properties[i][1]));
        }
        sort(prtn.begin(),prtn.end());
        int ans=0,cumx=0,prvf=INT_MAX;
        int mx=0;
        for(int i=n-1;i>=0;i--){
            
            int a=prtn[i].first;
            int b=prtn[i].second;
            if(prvf!=a){
                prvf=a;
                if(cumx!=0){
                    mx=max(mx,cumx);
                }
                cumx=b;
            }
            if(a!=prtn[n-1].first){
                if(b<mx){
                    ans++;
                }
            }
            cumx=max(cumx,b);
        }
        return ans;    
    }
};