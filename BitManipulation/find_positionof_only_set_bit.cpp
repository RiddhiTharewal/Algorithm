#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        // code here
        int count = 0;
        int i, total = 0;
        while(N){
            count += N%2;
            total++;
            if(N%2){
                i=total;
            }
            N=N/2;
        }
        if(count!=1){
            return -1;
        }
        return i;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}  // } Driver Code Ends