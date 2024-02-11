#include <bits/stdc++.h>
using namespace std;
string s;
int main(){
	getline(cin, s);
	for (int i = 0; i<s.size(); i++){
		if (isalpha(s[i])){
			if (s[i] < 78 || (s[i] >= 97 && s[i] < 110)) s[i] += 13;
			else s[i] -= 13;
		}
	}
	cout << s << endl;
	return 0;
}
