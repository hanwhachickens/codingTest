#include <bits/stdc++.h>
using namespace std;
vector<int> v {2,2,1,1,2,3,3,5,6,7,8,9};
int main(){
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end()); // unique 후 남는 배열을 지움 
	for (int i : v) cout << i << " ";
	cout << '\n';
	return 0;
} 
