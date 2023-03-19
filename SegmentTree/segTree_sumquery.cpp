// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int get_mid(int l, int h){
    return l+(h-l)/2;
}

int getUtilSum(int segT[], int ss, int se, int qs, int qe, int index){
    if(qs<=ss && qe>=se){
        return segT[index];
    }
    if(se<qs || qe<ss){
        return 0;
    }
    int mid = get_mid(ss,se);
    return getUtilSum(segT, ss, mid, qs, qe, 2*index+1)+getUtilSum(segT, mid+1, se, qs, qe, 2*index+2);
}
int getSum(int segT[], int n, int qs, int qe){
    if(qs<0 || qe>n-1 || qs>qe){
        cout<<"Invalid index";
        return -1;
    }
    return getUtilSum(segT, 0, n-1, qs, qe, 0);
}

void UpdateUtilVal(int segT[], int ss, int se, int index, int diff, int i){
    if(index<ss || index>se){
        return ;
    }
    segT[i] = segT[i] + diff;
    if(se!=ss){
        int mid = get_mid(ss,se);
        UpdateUtilVal(segT, ss, mid, index, diff, 2*i+1);
        UpdateUtilVal(segT, mid+1, se, index, diff, 2*i+2);
    }
}

void UpdateVal(int arr[], int segT[], int n, int index, int value){
    if(index<0 || index>n-1){
        cout<<"Invalid index";
        return ;
    }
    int diff = value - arr[index];
    arr[index] = value;
    UpdateUtilVal(segT, 0, n-1, index, diff, 0);
}
int enter_segV(int arr[], int ss, int se, int* segT, int index){
    if(ss == se){
        segT[index] = arr[ss];
        return segT[index];
    }
    int mid = get_mid(ss,se);
    segT[index] = enter_segV(arr, ss, mid, segT, 2*index+1) +  enter_segV(arr, mid+1, se, segT, 2*index+2);
    return segT[index];
}

int* construct_segT(int arr[], int n){
    int x = ceil(log2(n));
    int size = 2*pow(2,x);
    int *segT = new int[size];
    enter_segV(arr, 0, n-1, segT, 0);
    return segT;
}
int main() {
    int arr[] = {1, 3, 5, 7, 9, 11};
    int* segT = construct_segT(arr, 6);
    cout<<getSum(segT, 6, 1, 3)<<"\n";
    UpdateVal(arr, segT, 6, 1, 10);
    cout<<getSum(segT, 6, 1, 3);
    return 0;
}