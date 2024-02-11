#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a,b,c;
// (a*b)%c = (a%c) * (b%c)
ll go(ll a, ll b){
	if (b == 1) return a % c;
	ll ret = go(a,b/2);
	ret = (ret * ret) % c; // 2 ** 8 = 2 ** 4 * 2 ** 4
	if (b % 2)ret = (ret * a)%c; // b°¡ È¦¼ö¶ó¸é 
	return ret;
}
int main(){
	cin >> a >> b >> c;
	cout << go(a, b) << "\n";
	return 0;
}
