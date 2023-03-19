//Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.


#include<stdio.h>

int sum(int arr[], int n){
	int total = 0, max = 0;
	for(int i = 0; i < n; i++){
		total = total + arr[i];
		if(total > max){
			max = total;
		}
		if(total < 0){
			total = 0;
		}
	}
	return max;
}
int main(){
	int arr[] = {5,4,-1,7,8};
	int n = 5;
	printf("%d",sum(arr,n));
	return 0;
}