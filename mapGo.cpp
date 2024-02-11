#include <bits/stdc++.h>
using namespace std;
const int n = 3;
int a[n][n], visited[n][n];
const int dx[] = {-1,0,1,0};
const int dy[] = {0,1,0,-1};
void go(int y, int x){
	visited[y][x] = 1;
	cout << y << " " << x << "\n";
	for (int i = 0 ; i<4 ; i++){
		int ny = y+dy[i];
		int nx = x+dx[i];
		if (ny < 0 || ny >= n || nx < 0 || nx >= n) continue;
		if (a[ny][nx] == 0) continue;
		if (visited[ny][nx]) continue;
		go(ny, nx);
	}
}
int main(){
	for (int i = 0 ; i<3 ; i++){
		for ( int j = 0 ; j<3 ; j++){
			cin >> a[i][j];
		}
	}
	go(0,0);
}
