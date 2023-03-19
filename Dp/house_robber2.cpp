#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int solve(int *arr, int n){
	    int rob1 = 0;
	    int rob2 = 0;
	    int ans = 0;
	    for(int i = 0; i<n; i++){
	        ans = max(arr[i]+rob1,rob2);
		rob1 = rob2;
		rob2 = ans;
	    }
	    return rob2;
	}
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    // code here
	    int arr1[n-1];
	    int a = arr[0];
	    int b = solve(arr,n-1);
	    for(int i = 1; i<n; i++){
	    	arr1[i-1] = arr[i];
	    }
	    int c = solve(arr1,n-1);
	    return max(a,b,c);
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends