#include <bits/stdc++.h>
using namespace std;
int n, cnt[26];
string s, ret;
int main(){
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> s;
		cnt[s[0] - 'a']++;
	}
	for (int j = 0; j < 26 ; j++){
		if (cnt[j] >= 5){
			ret += j + 'a';
		}
	}
	if (ret.size()) cout << ret << endl;
	else cout << "PREDAJA" << endl;
	return 0;
}
