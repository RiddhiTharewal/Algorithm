// divide w/o *,/ or mod operator

//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    long long divide(long long dividend, long long divisor) 
    {
        //code here
        int sign = ((divisor<0)^(dividend<0))?-1:1;
        dividend = abs(dividend);
        divisor = abs(divisor);
        int quotient = 0, temp=0;
        for(int i = 31; i>=0; i--){
            if(temp+(divisor<<i)<=dividend){
                temp+=divisor<<i;
                quotient |= 1LL<<i;
            }
        }
        return sign*quotient;
    }
};

// { Driver Code Starts.
int main() {
	int t;
	cin >> t;

	while (t--)
	{

		long long a, b;
		cin >> a >> b;
		
		Solution ob;
		cout << ob.divide(a, b) << "\n";
	}

	return 0;
}
  // } Driver Code Ends