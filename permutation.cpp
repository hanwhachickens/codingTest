#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[] = {1,2,3};
	do{
		for(int i : a) cout << i << " ";
		cout << '\n';
	}while(next_permutation(a, a + 3));
	
	vector <int> b = {1,2,3};
	do{
		for(int i : b) cout << i << " ";
		cout << '\n';
	}while(next_permutation(b.begin(), b.end()));
	
	vector <int> c = {2,1,3}; // ������ �Ǿ����� ���� ���ʹ� ������ ����� �Ѵ�
	sort(c.begin(), c.end()); 
	do{
		for(int i : c) cout << i << " ";
		cout << '\n';
	}while(next_permutation(c.begin(), c.end()));
	
	vector<int> d = {2,1,3,100,200};
	sort(d.begin(), d.end());
	do{
		for (int i = 0; i < 2 ; i++){
			cout << d[i] << " "; // 2���� ���� 
		}
		cout << '\n';
	}while(next_permutation(d.begin(), d.end()));
}
