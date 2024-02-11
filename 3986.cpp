#include <bits/stdc++.h>
// 문제가 풀리지 않는다면 그림을 그려  도식화를 할 것(90도로 뒤집어보거나 문자열을 하나 더 붙여보거나 순서를 뒤집어보거나)
// 이 문제는 90도로 뒤집어서 스택으로 풀 수 있음
// 짝짓기나 폭발이라는 단어가 있으면 stack을 생각할 것 
using namespace std;
int n, ret;
string s; 
int main(){
	cin >> n;
	for (int i = 0 ; i<n ; i++){
		cin >> s;
		stack<char> stk; // 뒤를 참조한다면 stack 앞을 참조한다면 queue 
		for (char a : s){
			if (stk.size() && stk.top() == a) stk.pop(); // 스택의 size를 체크해야 top에 접근할 때 error가 나지 않는다. 
			else stk.push(a);
		}
		if (stk.size() == 0) ret++;
	}
	cout << ret << "\n";
	return 0;
} 
