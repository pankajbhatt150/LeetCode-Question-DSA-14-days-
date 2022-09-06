class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
       sort(intervals.begin(), intervals.end());
        vector<int> st = intervals[0];
        int count = 0;
        for(int i = 1; i < intervals.size(); i++){
            if(st[1] > intervals[i][0]) {
                count++;
                if(intervals[i][1] < st[1]) st = intervals[i];
            } else st = intervals[i];
        }
        return count;  
    }
};