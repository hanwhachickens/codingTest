#include <bits/stdc++.h>
using namespace std;
int n, k, temp, psum[1000001], ret = -10000004; // ret�� �־��� ���� �����ؼ� �װͺ��� ���� �� �־��� �� 
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