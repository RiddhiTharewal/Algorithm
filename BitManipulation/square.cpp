//square without using * or /
#include <bits/stdc++.h>
using namespace std;

int solve(int a){
    if(a == 0)
        return 0;
    if(a<0){
        a = -a;
    }
    int x = a>>1;
    if(a&1)
        return (solve(x)<<2) + (x<<2) + 1;
    else
        return solve(x)<<2;
     
}

int main() {
    // Write C++ code here
    cout<<solve(8);
    return 0;
}