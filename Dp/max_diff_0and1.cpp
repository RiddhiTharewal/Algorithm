#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int maxSubstring(string S)
	{
	    // Your code goes here
	    int count = 0;
	    int max = -1;
	    for(int i = 0; i<S.length(); i++){
	        if(S[i] == '0'){
	            count++;
	        }
	        else{
	            count--;
	        }
	        
	        if(count>max){
	            max = count;
	        }
	        if(count<0){
	            count = 0;
	        }
	    }
	    return max;
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.maxSubstring(s) << "\n";
   	}

    return 0;
}
  // } Driver Code Ends