// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int longestSubsequence(int N, int A[])
    {
        // code here
        vector<int> dp(N,1);
        int M = 1;
        for(int i = 1; i<N; i++){
            for(int j = 0; j<i; j++){
                if(abs(A[i]-A[j])==1){
                    dp[i] = max(dp[i],dp[j]+1);
                }
            }
            M = max(M,dp[i]);
        }
        return M;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int A[N];
        for(int i = 0;i < N;i++)
            cin>>A[i];
        
        Solution ob;
        cout<<ob.longestSubsequence(N, A)<<endl;
    }
    return 0;
}  // } Driver Code Ends