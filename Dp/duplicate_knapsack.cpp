int solve(int N, int W, int val[], int wt[],vector<vector<int> >& dp){
        if(N==0){
            return (W/wt[0])*val[0];
        }
        if(dp[N][W]!=-1){
            return dp[N][W];
        }
        if((W-wt[N-1])>=0){
            dp[N][W] = max(knapSack(N,W-wt[N-1],val,wt,dp)+val[N-1],knapSack(N-1,W,val,wt,dp));
        }
        else{
            dp[N][W] = knapSack(N-1,W,val,wt,dp);
        }
        return dp[N][W];
    }
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        vector<vector<int> > dp(N, vector<int>(W + 1, -1));
        return solve(N,W,val,wt,dp);
    }

or

 int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        int dp[N+1][W+1];
        for(int i = 0; i<=N; i++){
            for(int j = 0; j<=W; j++){
                if(i == 0 || j == 0){
                    dp[i][j] = 0;
                }
            }
        }
        for(int i = 1; i<=N; i++){
            for(int j = 1; j<=W; j++){
                if(wt[i-1] <= j)
                    dp[i][j] = max(dp[i][j-wt[i-1]]+val[i-1],dp[i-1][j]);
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        return dp[N][W];
    }