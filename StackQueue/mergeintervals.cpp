class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<vector<int>> ans;
        if(n==0)
            return ans;
        vector<int> store;
        sort(intervals.begin(),intervals.end());
        for(int i = 0; i<n; i++){
            ans.push_back(intervals[i]);
            if((i+1<n) && ans.back().back()>=intervals[i+1][0]){
               store.push_back(ans.back().front());
               if(ans.back().back()>intervals[i+1][1]){
                   store.push_back(ans.back().back());
               } 
                else{
                    store.push_back(intervals[i+1][1]);
                }
                i++;
                ans.pop_back();
                ans.push_back(store);
            }
           
        }
        return ans;
    }
};