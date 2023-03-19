
#include<bits/stdc++.h>
using namespace std;

bool isvalid(char str[], int n){
    stack<int> s;
    char t;
    for(int i = 0; i < n; i++){
     if(str[i] == '(' || str[i] == '{' || str[i] == '['){
         s.push(str[i]);
     }   
     else if(str[i] == ')'){
         t = s.top();
         s.pop();
         if(t != '('){
             return false;
         }
     }
     else if(str[i] == '}'){
         t = s.top();
         s.pop();
         if(t != '{'){
             return false;
         }
     }
     else if(str[i] == ']'){
         t = s.top();
         s.pop();
         if(t != '['){
             return false;
         }
     }
    }
    if(!s.empty()){
        return false;
    }
    return true;
}
int main(){
    char str[] = "([])";
    int n = sizeof(str)/sizeof(str[0]);
    cout<<isvalid(str,n);
}