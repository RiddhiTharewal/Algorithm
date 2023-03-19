//Given an array of size n, generate and print all possible combinations of r elements in array. For example, if input array is {1, 2, 3, 4} and r is 2, then output should be {1, 2}, {1, 3}, {1, 4}, {2, 3}, {2, 4} and {3, 4}.
#include<stdio.h>

void combination(int arr[], int data[], int index, int n, int i, int r){
    if(index == r){
        for(int k = 0; k<r; k++){
            printf("%d ",data[k]);
        }
        printf("\n");
        return;
    }
    if(i>n){
        return;
    }
    data[index] = arr[i];
    combination(arr,data,index+1,n,i+1,r);
    combination(arr,data,index,n,i+1,r);
}
void print_combination(int arr[], int n, int r){
    int data[r];
    combination(arr, data, 0, n-1, 0, r);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int r = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    print_combination(arr, n, r);
    return 0;
}
