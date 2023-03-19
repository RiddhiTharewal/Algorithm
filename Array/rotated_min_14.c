#include<stdio.h>
/*
int solve(int arr[], int n){
	if(arr[0]<arr[n-1])
		return arr[0];
	else{
		return arr[n-1-(arr[0]-arr[n-1])];
	}
}*/
int solve(int arr[], int n){
	int l = 0, r = n-1, m;
	if(arr[l] < arr[r]) return arr[l];
	while(l < r){
		m = (l+r)/2;
		if(arr[r]<arr[m]) l=m+1;
		else r=m;
	}
	return arr[l];  
}
int main(){
	int arr[] = {11,13,15,17};
	int n = 4;
	printf("%d",solve(arr,n));
	return 0;
}