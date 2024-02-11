#include <bits/stdc++.h>
using namespace std;

vector<string> split(string input, string delimiter){ // delimiter는 구분자 abcdabc에서 d 
	vector<string> ret;
	long long pos;
	string token = "";
	while((pos = input.find(delimiter)) != string::npos) { // delimiter가 남을 때까지 delimiter를 찾음 
		token = input.substr(0,pos); // delimiter 문자열 전까지 저장 
		ret.push_back(token);
		input.erase(0, pos + delimiter.length()); // delimiter까지 지움 
	}
	ret.push_back(input); // 남은 문자열 저장 
	return ret;
}

int main(){
	string s = "abcdabc", d = "d";
	vector<string> a = split(s,d);
	for(string b : a) cout << b << "\n";
} 
