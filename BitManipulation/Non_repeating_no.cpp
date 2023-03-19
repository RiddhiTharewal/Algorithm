//(n&~(n-1)) always return the binary number containing the rightmost set bit as 1.
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int XOR = 0;
        for(int i = 0; i<nums.size(); i++){
            XOR^=nums[i];
        }
        int right_bit = XOR & ~(XOR-1);
        int x = 0, y = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]&right_bit){
                x^=nums[i];
            }
            else{
                y^=nums[i];
            }
        }
        vector<int> ans;
        ans.push_back(x);
        ans.push_back(y);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends