int max(int a, int b){
	        return a>b?a:b;
	    }
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    int n = str.length();
		    int dp[n+1][n+1];
		    dp[0][0] = 0;
		    for(int i = 1; i<=n; i++){
		        dp[i][0] = 0;
		        dp[0][i] = 0;
		    }
		    for(int i = 1; i<=n; i++){
		        for(int j = 1; i<=n; j++){
		            if((str[i-1]==str[j-1]) and (i!=j)){
		                dp[i][j] = 1+dp[i-1][j-1];
		            }
		            else{
		                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		            }
		        }
		    }
		    return dp[n][n];
		}