#include <bits/stdc++.h>
using namespace std;
int n,m,a[15001], cnt;
int main(){
	cin >> n >> m;
	for (int i = 0 ; i<n ; i++){
		cin >> a[i];
	}
	if (m > 200000) cout << 0 << "\n"; // 시간 초과가 빡센 문제의 경우 안되는 경우의 수는 빠르게 제거 
	else{
		for (int i = 0 ; i<n ; i++){
			for (int j = i+1; j<n ; j++){
				if (a[i]+a[j] == m) cnt++;
			}
		}
		cout << cnt << "\n";
	}
	return 0;
}
