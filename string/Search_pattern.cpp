// Given a text txt[0..n-1] and a pattern pat[0..m-1], write a function search(char pat[], char txt[]) that prints all occurrences of pat[] in txt[]. You may assume that n > m.
#include <bits/stdc++.h>
using namespace std;


void solve(string s, string p)
{
       //Your code here
    vector<int> ans;
    int j = 0;
    for(int i = 0; i<s.length(); i++){
        if(p[j] == s[i]){
            int k = i;
            while(j<p.length() && p[j++]==s[k++]){}
            if(j == p.length()){
                ans.push_back(k-j);
            }
            j = 0;
        }
    }
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }      
}
int main() {
    string s = "THIS IS A TEST TEXT";
    string p = "TEST";
    solve(s, p);

    return 0;
}
