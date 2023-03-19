//Search an element in a sorted and rotated array

#include<stdio.h>

int search(int arr[], int key, int l, int h){
	//check if low is greater than high
	if(l>h){
		return -1;
	}
	int m = (l+h)/2;
	if(key == arr[m]){
		return m;
	}
	//check if low half is sorted
	if(arr[l] <= arr[m]){
		if(arr[l] <= key && arr[m] >key){
			return search(arr,key,l,m-1);
		}
		//if key not in lower half
		return search(arr,key,m+1,h);
	}
	//if lower half is not sorted meaning upper half is sorted
	if(key > arr[m] && key <= arr[h]){
		return search(arr, key, m+1, h);
	}
	return search(arr, key, l, m-1);
	
}

int main(){
	int arr[] = {4,5,6,7,0,1,2};
	int key = 3;
	int ans = search(arr,key,0,7);
	if(ans == -1){
		printf("Key not found");
	}
	else{
		printf("Key found at index : %d",ans);
	}
	return 0;
}
