//Write a function to find the longest common prefix string amongst an array of strings.
#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int i = 1, j,k;
        int n1 = strs[0].size();
        int n2 = strs[1].size();
        j = min(n1,n2);
        while(i<n){
            for(k = 0; k<j; k++){
                if(strs[i][k] != strs[i-1][k]){
                    break;
                }
            }
            j = k;
            if(j==0){
                break;
            }
            i++;
        }
        string s = "";
        for(int i = 0; i<j; i++){
            s = s + strs[0][i];
        }
        return s;
    }
   
int main() {
    // Write C++ code here
    vector<string>arr;
    arr.push_back("dog");
    arr.push_back("racecar");
    arr.push_back("car");
   cout<<longestCommonPrefix(arr);
    return 0;
}