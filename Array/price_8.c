//You are given an array prices where prices[i] is the price of a given stock on the ith day.

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int solve(int arr[],int n){
	int total = 0, new = 0, small = INT_MAX;
	for(int i = 0; i < n; i++){
		if(arr[i] < small){
			small = arr[i];
		}
		new = arr[i] - small;
		if(new > total){
			total = new;
		}
	}
	return total;
}

int main(){
	int arr[] = {7,6,4,3,1};
	int n = 5;
	printf("%d",solve(arr,n));
	return 0;
}