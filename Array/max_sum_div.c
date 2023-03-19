#include <stdio.h>

int solve(int arr[],int n,int k){
    int max = 0;
    for(int i = 1; i < n; i++){
        arr[i] = arr[i-1]+arr[i];
        if(arr[i]<0){
            arr[i] = arr[i]%k+k;
        }
        if(arr[i]%k == 0){
            max = i+1;
        }
    }
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if((arr[i]-arr[j])%k == 0 && max<(j-i)){
                max = j-i;
            }
        }
    }
    return max;
}
int main() {
    // Write C code here
    int arr[] = {-2, 2, -5, 12, -11, -1, 7};
    printf("%d",solve(arr,7,3));
    return 0;
}