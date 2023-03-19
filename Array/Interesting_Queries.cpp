vector<int>solveQueries(vector<int>nums, vector<vector<int>>Queries, int k){
	    // Code here
	    vector<int> ans;
	    map<int,int>::iterator itr;
	    map<int,int> m;
	    int count;
	    for(int i = 0; i<Queries.size(); i++){
	        int l = Queries[i][0];
	        int r = Queries[i][1];
	        count = 0;
	        for(int j = l-1; j<r;j++){
	            itr = m.find(nums[j]);
	            if(itr!=m.end()){
	                itr->second = itr->second + 1;
	            }
	            else{
	                m.insert({nums[j],1});
	            }
	        }
	        for(itr = m.begin(); itr!=m.end(); itr++){
	            if(itr->second >= k){
	                count++;
	            }
	        }
	        m.clear();
	        ans.push_back(count);
	    }
	    return ans;
	}