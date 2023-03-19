// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long long int mod = (long long int)1e9+7;
    long long int dp[1001][801];
    int ncr(int n, int r){
        // code here
        if(r>n){
            return 0;
        }
        if(r==n || r==0){
            return 1;
        }
        if(r==1)
            return n;
        
        if(dp[n][r]!=-1){
            return dp[n][r];
        }
        return dp[n][r] = (ncr(n-1,r-1)+ncr(n-1,r))%mod;
    }
    int nCr(int n, int r){
        for(int i = 0; i<=n; i++)for(int j = 0; j<=r; j++)dp[i][j] = -1;
        return ncr(n,r);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}  // } Driver Code Ends