class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
     int n= letters.size();
        if(letters[n-1]<=target||target<letters[0])
        {
            return letters[0];
        }
        int l=0, r=n-1;
        while(l+1<r)
        {
            int mid=l+(r-l)/2;
            if(letters[mid]<=target){
                l=mid;
            }
            else{
                r=mid;
            }
        }
        return letters[r];
    }
};