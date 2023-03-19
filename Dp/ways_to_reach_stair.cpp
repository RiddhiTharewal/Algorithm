#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	    long long int mod = (long long int)1e9+7;
	    int solve(int n, int dp[]){
            if(n<=1){
                dp[n] = 1;
                return dp[n];
            }
            if(dp[n]!=-1){
                return dp[n];
            }
            dp[n] = (solve(n-1,dp)%mod+solve(n-2,dp)%mod)%mod;
            return dp[n];
        }
		int nthPoint(int n){
		    // Code here
		    int dp[n+1];
		    memset(dp,-1,sizeof dp);
		    solve(n,dp);
		    return dp[n];
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends