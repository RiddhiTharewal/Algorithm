/*
Given an integer array nums and an integer k, return the kth largest element in the array.

Note that it is the kth largest element in the sorted order, not the kth distinct element.

 */

#include <iostream>
#include<queue>
using namespace std;


int solve(int arr[],int n,int k) {
    priority_queue<int> ar;
    for(int i = 0; i<n; i++){
        ar.push(arr[i]);
    }
    //cout<< ar.size();
    while(ar.size()> n-k+1){
       // cout << ar.top() << " " << ar.size()<<"\n";
        ar.pop();
    }
    return ar.top();
}	

int main(){
	int arr[] = {3,2,3,1,2,4,5,5,6};
	cout << solve(arr,9,4);
	
	return 0;
}