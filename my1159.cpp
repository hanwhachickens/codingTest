#include <bits/stdc++.h>
using namespace std;
int a, b, cnt[26];
string player, answer, front;
int main(){
	cin >> a;
	for (int i = 0; i<a; i++){
		b = 0;
		cin >> player;
		for (char a : player){
			cnt[a - 'a']++;
			b++;
			if (b == 1) break;
		}
	}
	for (int j = 0; j < 26 ; j++){
		if (cnt[j] >= 5){
			answer += j + 'a';
		}
	}
	if (answer == ""){
		cout << "PREDAJA" << endl;
	}
	else{
		cout << answer << endl;
	}
	return 0;
}
