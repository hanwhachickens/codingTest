#include <bits/stdc++.h>
using namespace std;
int n, k, temp, psum[1000001], ret = -10000004; // ret는 최악의 수를 가정해서 그것보다 조금 더 최악의 값 
int main(){
	cin >> n >> k;
	for (int i = 1 ; i<=n ; i++){
		cin >> temp; psum[i] = psum[i-1] + temp;
	}
	for (int i = k ; i <= n ; i++){
		ret = max(ret, psum[i] - psum[i-k]);
	}
	cout << ret << endl;
	return 0;
}
