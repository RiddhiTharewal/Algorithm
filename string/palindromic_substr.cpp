// Given a string s, return the number of palindromic substrings in it.
#include <bits/stdc++.h>
using namespace std;


long long int solve(string s)
    {
       //Your code here
       int n = s.length();
       long long int count = 0;
       int l , r;
       for(int i = 0; i < n; i++){
           l = i; 
           r = i;
           while(l>=0 && r<=n-1 && (s[l] == s[r])){
               count++;
               l--;
               r++;
           }
           l = i; 
           r = i+1;
           while(l>=0 && r<=n-1 && (s[l] == s[r])){
               count++;
               l--;
               r++;
           }
       }
       return count;
    }
long long int  countPS(string s)
    {
       //Your code here
       int n = s.length();
       if(n==0 || n==1){
           return n;
       }
       long long int count = n;
       bool arr[n][n];
       for(int i = 0; i<n; i++){
           arr[i][i] = true;
       }
       for(long long int i = n-2; i>=0; i--){
           for(long long int j = i+1; j<n; j++){
               if(s[i] == s[j]){
                   if(arr[i+1][j-1] || (j-i == 1)){
                       count++;
                       arr[i][j] = true;
                   }
               }
           }
       }
        return count;
}

//accurate solution
long long int mod = 1e9+7;
    int dp[1001][1001];
    long long int solve(string &s, int i, int j){
        if(i>j)
            return 0;
        if(i==j)
            return 1;
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(s[i] == s[j]){
            dp[i][j] = (solve(s,i,j-1)%mod+solve(s,i+1,j)%mod+1+mod)%mod;
        }
        else{
            dp[i][j] =  (solve(s,i,j-1)%mod+solve(s,i+1,j)%mod-solve(s,i+1,j-1)%mod+mod)%mod;
        }
        return dp[i][j];
    }
    long long int  countPS(string s)
    {
       //Your code here
       int n = s.length();
       dp[n][n];
       memset(dp,-1,sizeof(dp));
       return solve(s,0,n-1);
      
    }
int main() {
    string s = "aaaaaaaaaaaaaaaaaaaaaaaaaaa";
    cout<<solve(s);

    return 0;
}
