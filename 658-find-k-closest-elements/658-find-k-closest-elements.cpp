class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
      vector<pair<int,int>>ans;
    
    //store |x - arr|  for know how far every elements present from x and also store index to find final element which is closer
    
    for(int i=0;i<arr.size();i++){
        ans.push_back({abs(x-arr[i]),i});
    }
    
    //sort the value by which we know minimum distance of element from x
    
    sort(ans.begin(),ans.end());
    vector<int>vt;
    int i=0;
    
    //stroe k times value in vector
    
    while(i<k){
        vt.push_back(arr[ans[i].second]);
        i++;
    }
    //we need answer in accending ordere 
    
    sort(vt.begin(),vt.end());
    
    
    return vt;   
        
    }
};