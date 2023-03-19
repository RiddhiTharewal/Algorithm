// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
    int precedence(char a){
        if(a == '+' || a == '-'){
            return 1;
        }
        else if(a == '*' || a == '/'){
            return 2;
        }
        else if(a == '^'){
            return 3;
        }
        return -1;
    }
    string infixToPostfix(string s) {
        // Your code here
        int n = s.length();
        stack<char> st;
        string ans = "";
        for(int i = 0; i < n; i++){
            if(('a'<=s[i] && s[i]<='z') || ('A'<=s[i] && s[i]<='Z') || ('0'<=s[i] && s[i]<='9')){
                ans+=s[i];
            }
            else{
                if(s[i] == '('){
                    st.push(s[i]);
                }
                else if(s[i] == ')'){
                    while(st.top()!='('){
                        ans+=st.top();
                        st.pop();
                    }
                    st.pop();
                }
                else{
                    while(!st.empty() && precedence(s[i])<=precedence(st.top())){
                        if (s[i] == '^' && st.top() == '^')
                            break;
                        else{
                            ans+=st.top();
                            st.pop();
                        }
                    }
                    st.push(s[i]);
                }
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};


//{ Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}

// } Driver Code Ends