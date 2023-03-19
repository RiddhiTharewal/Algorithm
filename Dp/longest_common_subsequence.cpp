#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

 // } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    int dp[1001][1001];
    int solve(string s1, string s2, int n, int m){
        if(n==-1 or m==-1)return 0;
        if(dp[n][m]!=-1)return dp[n][m];
        if(s1[n]==s2[m]) return dp[n][m] = 1+solve(s1,s2,n-1,m-1);
        int x = solve(s1,s2,n-1,m);
        int y = solve(s1,s2,n, m-1);
        return dp[n][m] = max(x,y);
    }
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
        // your code here
        memset(dp,-1,sizeof(dp));
        return solve(s1,s2,x-1,y-1);
    }
};


// { Driver Code Starts.
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}
  // } Driver Code Ends