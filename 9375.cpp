#include <bits/stdc++.h>
using namespace std;
int t, n;
string a, b;
int main(){
	cin >> t;
	for (int i = 0 ; i<t ; i++){
		map<string, int> _map;
		cin >> n;
		for (int i = 0 ; i < n ; i++){
			cin >> a >> b;
			_map[b]++;
		}
		long long ret = 1; // ������ ����� �� ������ long long���� 
		for (auto c : _map) ret *= ((long long)c.second + 1);
		ret--;
		cout << ret << "\n";
	}
	return 0;
}
