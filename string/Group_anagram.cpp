//Given an array of strings strs, group the anagrams together. You can return the answer in any order.
#include <bits/stdc++.h>
using namespace std;
void solve(string arr[],int n){
    map<string, vector<string>> m;
    map<string, vector<string>> :: iterator itr;
    string str;
    for(int i = 0; i<n; i++){
        str = arr[i];
        sort(str.begin(),str.end());
        itr = m.find(str);
        if(itr != m.end()){
            (itr->second).push_back(arr[i]);
        }
        else{
            m.insert({str,{arr[i]}});
        }
    }
    for(itr = m.begin(); itr!=m.end(); itr++){
        cout<<"[ ";
        for(auto it = (itr->second).begin(); it!=(itr->second).end(); it++){
            cout << *it<<" ";
        }
        cout<<" ]";
    }
}

int main(){
    string arr[] = {"eat","tea","tan","ate","nat","bat"};
    solve(arr,6);
}
    