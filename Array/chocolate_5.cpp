/*Given an array of n integers where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets such that: 

Each student gets one packet.
The difference between the number of chocolates in the packet with maximum chocolates and packet with minimum chocolates given to the students is minimum.*/


#include <bits/stdc++.h>
using namespace std;


int find_diff(int arr[], int n, int m){
	if(m == 0 || n == 0){
		return 0;
	}
	if(n<m){
		return -1;
	}	
	sort(arr, arr + n);
	int min_diff = arr[m-1]-arr[0];
	for(int i = 1; i < n-m+1; i++){
		if(arr[m+i-1]-arr[i] < min_diff){
			 min_diff = arr[m+i-1]-arr[i];
		}
	}
	return min_diff;
}
	
int main(){
	 int arr[] = { 12, 4,  7,  9,  2,  23, 25, 41, 30,
                  40, 28, 42, 30, 44, 48, 43, 50 };
    	int m = 7; // Number of students
    	int n = sizeof(arr) / sizeof(arr[0]);
    	cout << "Minimum difference is "
         << find_diff(arr, n, m);
    	return 0;
}