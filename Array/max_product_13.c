//Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.


#include<stdio.h>
#include<limits.h>
int max(int a, int b){
	return a>b?a:b;
}
int product(int arr[], int n){
	int arr1[n],arr2[n];
	arr1[0] = arr[0];
	arr2[n-1] = arr[n-1];
	int max1 = INT_MIN;
	for(int i = 1; i<n; i++){
		arr1[i] = arr1[i-1]*arr[i];
		arr2[n-i-1] = arr2[n-i]*arr[n-i-1];
	}
	for(int i = 0; i < n; i++){
		int c = max(arr1[i], arr2[i]);
		if(max1 < c){
			max1 = c;
		}
	}
	return max1;
}
int main(){
	int arr[] = {-2,0,-1};
	int n = 3;
	printf("%d",product(arr,n));
	return 0;
}