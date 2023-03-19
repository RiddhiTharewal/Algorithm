/*
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
*/

#include<stdio.h>

void solve(int arr[],int n){
	int left[n],right[n];
	left[0] = 1;
	right[n-1] = 1;
	for(int i = 1; i<n; i++){
		left[i] = left[i-1]*arr[i-1];
		right[n-i-1] = right[n-i]*arr[n-i];
	}
	for(int i = 0; i<n; i++){
		printf("%d ",left[i]*right[i]);
	}
	return;
}

int main(){
	int arr[] = {1,2,3,4};
	solve(arr,4);
	return 0;
}	