#include <bits/stdc++.h>
using namespace std;

vector<string> split(string input, string delimiter){ // delimiter�� ������ abcdabc���� d 
	vector<string> ret;
	long long pos;
	string token = "";
	while((pos = input.find(delimiter)) != string::npos) { // delimiter�� ���� ������ delimiter�� ã�� 
		token = input.substr(0,pos); // delimiter ���ڿ� ������ ���� 
		ret.push_back(token);
		input.erase(0, pos + delimiter.length()); // delimiter���� ���� 
	}
	ret.push_back(input); // ���� ���ڿ� ���� 
	return ret;
}

int main(){
	string s = "abcdabc", d = "d";
	vector<string> a = split(s,d);
	for(string b : a) cout << b << "\n";
} 
