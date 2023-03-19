/*
Given two numbers say a and b, mark the multiples of 2 and 5 between a and b using less than O(|b – a|) space and output each of the multiples. */

#include<stdio.h>

void solve(int a, int b){
	for(int i = a; i<=b; i++){
		if(i%2 == 0 || i%5 == 0){
			printf("%d ",i);
		}
	}
}

int main(){
	solve(60,95);
	return 0;
}
