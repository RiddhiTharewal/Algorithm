//Given an array Arr of N positive integers and another number X. Determine whether or not there exist two elements in Arr whose sum is exactly X.
#include <bits/stdc++.h>

using namespace std;


//User function template for C++
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    int l = 0, r = n-1;
	    sort(arr,arr+n);
	    while(l<r){
	        if(arr[l]+arr[r] == x){
	            return true;
	        }
	        if(arr[l]+arr[r]>x){
	            r--;
	        }
	        else{
	            l++;
	        }
	    }
	    return false;
	}
};



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}