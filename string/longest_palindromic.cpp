// Given a string s, return the longest palindromic substring in s.
#include <bits/stdc++.h>
using namespace std;

int solve(string s){
    int max = 1;
    int count = 0;
    for(int i = 0; i<s.length(); i++){
        int j = s.length()-1;
        int k  = i;
        while(k<j){
            if(s[k] == s[j]){
                k++;
                j--;
                count+=2;
            }
            else{
                j--;
                if(count>0){
                    count = 0;
                    break;
                }
            }
        }
        if(k==j){
            count++;
        }
        if(max<count){
            max = count;
        }
    }
    return max;
}
int main() {
    string s = "cbbd";
    cout<<solve(s);

    return 0;
}