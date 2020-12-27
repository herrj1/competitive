#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mxN=1e3. di[4]={1,0,-1,0}, dj[4]={0,1,0,-1};
//const char dc[4]={};

int n, m, si, sj, ti, tj;
string s[mxN], p[mxN];

bool e(int i, int j){
	return i>=0&&i<n&&j>=0&&j<m&&s[i][j]=='.';
}

int main(){
    cin >> n >> m;
	for(int i=0; i<n; ++i){
		cin >> s[i];
		for(int j=0;j<n; ++j){
			if(s[i][j]=='A')
				si=i, sj=j, s[i][j]='.';
			if(s[i][j]=='B')
				ti=i, tj=j, s[i][j]='.';
		}
		p=string(n, 0);
	}
	queue<ar<int, 2>> qu;
	qu.push({si, sj});
    while(qu.size()){
		ar<int, 2> u = qu.front();
		qu.pop();
		s[u[0]][u[1]]='0';
		for(int k=0;k<4;++k){
			int ni=i+di[k], nj=j+dj[k];
			if(!e({ni, nj})
				continue;
			qu.push({ni, nj})
		}
	}
}
