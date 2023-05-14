//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isStraightHand(int N, int groupSize, vector<int> &hand) {
            if(N%groupSize!=0)   return false;
        map<int,int>count;
        for(int i=0;i<  N;i++)   count[hand[i]]++;
        while(count.size())
        {
            int c=0,arr[groupSize];
            for(auto m:count)
            {
                arr[c++] = m.first;
                count[m.first]--;
                if(!count[m.first])   count.erase(m.first);
                if(c==groupSize)   break;
            }
            for(int i=0;i<groupSize-1;i++)
                if(arr[i]+1!=arr[i+1])
                    return false;
        }
        return true; // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, groupSize;
        cin >> N >> groupSize;

        vector<int> hand(N);
        for (int i = 0; i < N; i++) cin >> hand[i];

        Solution obj;
        int ans = obj.isStraightHand(N, groupSize, hand);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends