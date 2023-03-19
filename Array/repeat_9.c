/*You are given a read only array of n integers from 1 to n.

Each integer appears exactly once except A which appears twice and B which is missing.

Return A and B.*/

#include<stdio.h>

void solve(int arr[],int n){
	int ar[n], a, b;
	for(int i = 0; i<n; i++){
		ar[i] = 0;
	}
	for(int i = 0; i<n; i++){
		ar[arr[i]-1] +=1;
	}
	for(int i = 0; i < n; i++){
		if(ar[i] == 0){
			b = i+1;
		}
		if(ar[i] > 1){
			a = i+1;
		}
	}
	printf("%d-%d",a,b);
	
}
int main(){
	int arr[] = {3, 1, 2, 5, 3};
	solve(arr,5);
	return 0;
}