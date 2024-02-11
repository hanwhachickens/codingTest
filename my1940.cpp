#include <bits/stdc++.h>
using namespace std;
int a, b, c, ret;
vector<int> cnt;
int main(){
	cin >> a >> b;
	for (int i = 0 ; i<a ; i++){
		cin >> c;
		cnt.push_back(c);
	}
	for (int i = 0 ; i<a ; i++){
		if (find(cnt.begin(), cnt.end(), b-cnt[i]) != cnt.end()){
			ret += 1;
		}
	}
	cout << ret / 2 << "\n";
	return 0;
}
