/*
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.


*/
#include <iostream>

using namespace std;
int max(int a,int b){
    return a>b?a:b;
}
int min(int a,int b){
    return a<b?a:b;
}
int solve(int arr[], int n){
    int left[n], right[n],sum=0;
    left[0] = arr[0];
    right[n-1] = arr[n-1];
    for(int i = 1; i<n; i++){
        left[i] = max(left[i-1],arr[i]);
        right[n-i-1] = max(right[n-i],arr[n-i-1]);
    }
    for(int i = 1; i<n-1; i++){
        sum = sum + min(left[i],right[i]) - arr[i];
    }
    return sum;
}
int main()
{
    int arr[] = {4,2,0,3,2,5};
    cout<<solve(arr,6);
    return 0;
}
