#include <bits/stdc++.h>
using namespace std;
int cnt[26];
string str;
// count 문제에서 map? array?
// string 기반, 불연속적 integer나 문자(ascii)라면 map integer 기반이라면 array
// 대문자 A는 65(~90) 소문자 a는 97(~122)
int main(){
	cin >> str;
	for (char a : str){
		cnt[a-'a']++;
	}
	for (int i = 0 ; i<26 ; i++) cout << cnt[i] << " ";
	return 0;
} 
