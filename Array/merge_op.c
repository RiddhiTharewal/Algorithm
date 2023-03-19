/*Find minimum number of merge operations to make an array palindrome*/
// Online C compiler to run C program online
#include <stdio.h>

int solve(int arr[],int n){
    int l = 0, r = n-1, count = 0;
    
    while(l<r){
        if(arr[l] == arr[r]){
            l++;
            r--;
        }
        else if(arr[l] < arr[r]){
            l++;
            arr[l] = arr[l-1]+arr[l];
            count++;
        }
        else{
            r--;
            arr[r] = arr[r]+arr[r+1];
            count++;
        }
    }
    return count;
}
int main() {
    // Write C code here
    int arr[] = {1, 4, 5, 1};
    printf("%d",solve(arr,4));
    
    return 0;
}