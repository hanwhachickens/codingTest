#include <bits/stdc++.h>
using namespace std;
int cnt[26];
string str;
// count �������� map? array?
// string ���, �ҿ����� integer�� ����(ascii)��� map integer ����̶�� array
// �빮�� A�� 65(~90) �ҹ��� a�� 97(~122)
int main(){
	cin >> str;
	for (char a : str){
		cnt[a-'a']++;
	}
	for (int i = 0 ; i<26 ; i++) cout << cnt[i] << " ";
	return 0;
} 
