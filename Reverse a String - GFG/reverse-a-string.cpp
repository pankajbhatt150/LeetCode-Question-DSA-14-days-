// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
     for (int start = 0, end = str.size() - 1; start < end; start++, end--)
   {
       int temp = str[start];
       str[start] = str[end];
       str[end] = temp;
   }
 
 return str;
    
  //Your code here
}