// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int result(int a, int b,char exp){
        if(exp == '+'){
            return a+b;
        }
        if(exp == '-'){
            return a-b;
        }
        if(exp == '*'){
            return a*b;
        }
        if(exp == '/'){
            return a/b;
        }
        if(exp == '%'){
            return a%b;
        }
    }
    int evaluatePostfix(string S)
    {
        // Your code here
        int n = S.length();
        stack<int> ans;
        int val;
        for(int i = 0; i<n; i++){
            if((S[i]-'0')>=0 && (S[i]-'0')<=9){
                ans.push(S[i]-'0');
            }
            else{
                int a = ans.top();
                ans.pop();
                int b = ans.top();
                ans.pop();
                ans.push(result(b,a,S[i]));
            }
        }
        return ans.top();
    }
};

//{ Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends