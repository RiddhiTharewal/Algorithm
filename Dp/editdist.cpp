#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int dp[101][101];
    int solve(string s, string t, int m, int n){
        if(n==-1)
            return m+1;
        if(m==-1)
            return n+1;
        if(dp[m][n] != -1)
            return dp[m][n];
            
        if(s[m]==t[n])
            return dp[m][n] = solve(s,t,m-1,n-1);
        return dp[m][n]=1+min(solve(s,t,m-1,n-1),min(solve(s,t,m,n-1),solve(s,t,m-1,n)));
            
    }
    int editDistance(string s, string t) {
        // Code here
        int m = s.length();
        int n = t.length();
        dp[m][n];
        memset(dp,-1,sizeof(dp));
        return solve(s,t,m-1,n-1);
    }
};

// { Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends