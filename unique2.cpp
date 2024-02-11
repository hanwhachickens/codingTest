// unique는 앞에서부터 연쇄적으로 없애나가는 함수이므로 sort()와 같이 써야 한다. 
#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main(){
	for (int i = 1; i<=5 ; i++){
		v.push_back(i);
		v.push_back(i);
	}
	for (int i : v) {
		cout << i << ' ';
	}
	cout << '\n';
	// 중복되지 않은 요소로 채운 후, 그 다음 이터레이터를 반환한다.
	auto it = unique(v.begin(), v.end());
	cout << it - v.begin() << '\n'; // 5
	// 앞에서부터 중복되지 않게 채운 후 나머지 요소들은 그대로 둔다.
	for (int i : v) cout << i << " "; 
}
