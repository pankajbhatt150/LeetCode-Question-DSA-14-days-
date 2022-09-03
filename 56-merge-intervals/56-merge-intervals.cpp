class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>> mergeIntervals;
        if(intervals.size()==0){
            return mergeIntervals ;
        }
        sort(intervals.begin(),intervals.end());
            vector<int> tempIntervals=intervals[0];
        for(auto it:intervals)
        {
          if(it[0]<=tempIntervals[1]){
              tempIntervals[1]=max(it[1],tempIntervals[1]);
          }  else{
              mergeIntervals.push_back(tempIntervals);
                  tempIntervals=it;
          }
        }
             mergeIntervals.push_back(tempIntervals);
                 return mergeIntervals;
        }
};