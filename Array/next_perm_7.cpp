//A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void swap(int* a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
	return;
}
void solve(vector<int>& arr,int n) {
    int i, j;
	for(i = n-2; i>=0; i--){
		if(arr[i]<arr[i+1]){
			break;
		}
	}
	if(i==-1){
		reverse(arr.begin(),arr.end());
	}
	else{
		for(j = n-1; j>0; j--){
			if(arr[j] > arr[i]){
				break;
			}
		} 
		swap(arr[i],arr[j]);
		reverse(arr.begin()+i+1, arr.end());
	}	
	
	for(int i = 0; i<3; i++){
		cout << arr[i] << " ";
	}
}	

int main(){
	vector<int> vect;
 
 	vect.push_back(1);
    	vect.push_back(2);
    	vect.push_back(3);
	solve(vect,3);
	
	return 0;
}