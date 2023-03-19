/*Given a list of non negative integers, arrange them in such a manner that they form the largest number possible.The result is going to be very large, hence return the result in the form of a string.*/

// Online C++ compiler to run C++ program online
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int myCompare(string X, string Y){
	    string c = X.append(Y);
	    string d = Y.append(X);
	    return c>d ? 1:0;
	 
}
string printLargest(vector<string> &arr) {
    // code here
    sort(arr.begin(),arr.end(),myCompare);
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i];
    }
    
}

int main()
{
    vector<string> arr;
    arr.push_back("54");
    arr.push_back("546");
    arr.push_back("548");
    arr.push_back("60");
    printLargest(arr);
 
    return 0;
}
