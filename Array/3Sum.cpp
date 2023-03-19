// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
#include <bits/stdc++.h>
using namespace std;

struct triplet{
    int a,b,c;
};

void solve(int arr[],int n){
    sort(arr,arr+n);
    int l, h;
    vector <triplet> ans;
    for(int i = 0;i<n; i++){
       /* if(arr[i] == arr[i+1]){
            continue;
        }*/
        l = i+1;
        h = n-1;
        while(l<h){
            if((arr[l]+arr[h])==(-arr[i])){
                ans.push_back({arr[i],arr[l],arr[h]});
                l++;
                h--;
            }
            else if((arr[l]+arr[h])<(-arr[i])){
                l++;
            }
            else{
                h--;
            }
        }
        if(arr[i] == arr[i+1]){
            i++;
        }
    }
    for(int i = 0; i<ans.size(); i++){
        //cout<<*it;
        cout<<"["<<ans[i].a<<","<<ans[i].b<<","<<ans[i].c<<"]";
    }
}
int main() {
    // Write C++ code here
    int arr[] = {-1,0,1,2,-1,-4};
    solve(arr,6);

    return 0;
}