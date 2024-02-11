#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[100004], b, c, psum[100004], n, m;
/*
int main(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int i = 0 ; i < m ; i++){
		cin >> b >> c;
		int sum = 0;
		for(int j = b; j <= c; j++){
			sum += a[j];
		}
		cout << sum >> '\n';
	}
	return 0;
}
*/

// 정적 배열일 때만 누적합 사용 가능, 동적 배열일 때는 팬윅트리

int main(){
	//ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 이 줄을 추가하면 결과값이 한 번에 나옴 
	cin >> n >> m;
	for (int i = 1; i<=n ; i++){
		cin >> a[i];
		psum[i] = psum[i-1] + a[i];
	}
	for (int i = 0; i< m ; i++){
		cin >> b >> c;
		cout << psum[c] - psum[b-1] << '\n';
	}
	return 0;
} 
