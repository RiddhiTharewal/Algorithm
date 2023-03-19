//Count total set bit from 1 to n
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        // Your logic here
        // int count = 0;
        // for(int i = 1; i<=n; i++){
        //     int j = i;
        //     while(j){
        //         count+=j%2;
        //         j/=2;
        //     }
        // }
        // return count;
        int count = log2(n);	//total no. of bit till n
        int ans = 0;
        for(int i = 0; i<=count; i++){
            int power = pow(2,i);	//power of 2
            int tg = (n+1)/power;	//find total group present till no.
            int remainder = (n+1)%power;	//total number present apart from grp
            ans += tg/2*power;	
            if(tg%2!=0){
                ans+=remainder;
            }
        }
        return ans;
        
    }
};


// { Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}
  // } Driver Code Ends