/* reverse array */
#include<stdio.h>

void print_rev(int arr[], int n){
	for(int i = 0; i<n/2; i++){
		int temp = arr[i];
		arr[i] = arr[n-i-1];
		arr[n-i-1] = temp;
	}
	for(int i = 0; i<n; i++){
		printf("%d ",arr[i]);
	}
	return;
}

/* Driver program to test above function */
int main()
{
int arr[] = {1000, 11, 445, 5, 1, 330, 3000};
int arr_size = 7;
print_rev(arr,arr_size);
return 0;
}
