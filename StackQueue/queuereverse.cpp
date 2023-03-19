//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;
queue<int> rev(queue<int> q);
int main()
{
    int test;
    cin>>test; 
    while(test--)
    {
    queue<int> q; 
    int n, var; 
    cin>>n; 
    while(n--)
    {
        cin>>var; 
        q.push(var);
    }
    queue<int> a=rev(q); 
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl; 
    }
}
// } Driver Code Ends


//function Template for C++

//Function to reverse the queue.
void reverse(queue<int>& q){
    // if(q.empty()){
    //     return;
    // }
    // int x = q.front();
    // q.pop();
    // reverse(q,q1);
    // q1.push(x);
    // return;
    stack<int> S;
    while(!q.empty()){
        S.push(q.front());
        q.pop();
    }
    while(!S.empty()){
        q.push(S.top());
        S.pop();
    }
}
queue<int> rev(queue<int> q)
{
    // add code here.
    reverse(q);
    return q;
    
}