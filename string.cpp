#include <bits/stdc++.h>
using namespace std;
string dopa = "abcde";
// Q1. 앞에서부터 3개의 문자열을 출력하라
// Q2. 해당 문자열을 거꾸로 해서 출력하라
// Q3. 해당 문자열 끝에 "umzunsik"이란 문자열을 추가하라 

int main(){
	// 3개 출력
	cout << dopa.substr(0,3) << '\n';
	// 거꾸로 출력
	reverse(dopa.begin(), dopa.end());
	cout << dopa << '\n';
	// 엄준식 추가 출력
	cout << dopa + "umzunsik" << '\n';
	return 0; 
}

// 코드를 바로 작성하지 말 것(문제를 보고 해석한 다음 어떤 것을 사용할 지 결정하고 코드를 작성할 것)
// 1. 최대, 최소 범위를 파악한다.
// 2. 단순 구현이라면 구현하자.(위 문제와 같이)
// 3. 무식하게 풀 수 있다면 무식하게 풀자.
// 4. 아니라면 다른 알고리즘을 생각하자.
// 5. 제출하기 전, 반례를 항상 생각하자. ( 테스트 케이스 맞췄다고 바로 제출하지 말 것!) 
