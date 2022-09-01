class Solution {
public:
    int search(vector<int>& nums, int target) {
       int n=nums.size();
        if(n==1){
            if(target==nums[0]) return 0;
            else return -1;
        }
        if(n==2){
            if(target==nums[0]) return 0;
            if(target==nums[1]) return 1;
            else return -1;
        }
        if(nums[0]>nums[n-1] && target<nums[0] && target>nums[n-1]) return -1;
        int first=0,last=n-1,mid,lastE,firstE,midE;
        while(last-first>1){
            mid=(first+last)/2;
            lastE=nums[last];
            firstE=nums[first];
            midE=nums[mid];
            if(target==midE) return mid;
            if(target==firstE) return first;
            if(target==lastE) return last;
            if(lastE>firstE){
                if(target>midE) first=mid;
                else last=mid;
            }
            else{
                if(midE>firstE){
                    if((target<midE && target<firstE) || (target>midE && target>firstE))
                        first=mid;
                    else
                        last=mid;
                }
                else{
                    if(target>midE && target<firstE)
                        first=mid;
                    else if(target>midE && target>firstE)
                        last=mid;
                    else if(target<midE && target>firstE)
                        return -1;
                    else if(target<midE && target<firstE)
                        last=mid;
                }
            }
        }
        return -1;  
    }
};
//
