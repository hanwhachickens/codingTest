#include <bits/stdc++.h>
// ������ Ǯ���� �ʴ´ٸ� �׸��� �׷�  ����ȭ�� �� ��(90���� ������ų� ���ڿ��� �ϳ� �� �ٿ����ų� ������ ������ų�)
// �� ������ 90���� ����� �������� Ǯ �� ����
// ¦���⳪ �����̶�� �ܾ ������ stack�� ������ �� 
using namespace std;
int n, ret;
string s; 
int main(){
	cin >> n;
	for (int i = 0 ; i<n ; i++){
		cin >> s;
		stack<char> stk; // �ڸ� �����Ѵٸ� stack ���� �����Ѵٸ� queue 
		for (char a : s){
			if (stk.size() && stk.top() == a) stk.pop(); // ������ size�� üũ�ؾ� top�� ������ �� error�� ���� �ʴ´�. 
			else stk.push(a);
		}
		if (stk.size() == 0) ret++;
	}
	cout << ret << "\n";
	return 0;
} 
