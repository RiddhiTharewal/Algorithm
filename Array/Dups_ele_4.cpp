#include <iostream>
#include <iterator>
#include <map>

using namespace std;
//using map  
int main()
{
    int arr[]={1,2,3,1};
    int n = 4;
  
    // empty map container
    map<int, int> dups;
    for(int i = 0; i<n; i++){
	if(dups.find(arr[i]) != dups.end()){
		cout << "Duplicate present";
		return 0;
	}
	dups.insert({ arr[i], 1 });
    }
    cout << "Duplicate not present";  
    return 0;
}