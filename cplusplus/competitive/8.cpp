#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mxN = 1e5, mxN=2e5;
int n, m, p[mxN];
ar<int, 3> e[mxN];
11 ans;

int find(int x){
	return x^p[x]?p[x]=find(p[x]):x;
}

bool join(int x, int y){
	if((x=find(x))==(y=find(y)))
		return 0;
	p[x]=y;
	return 1;
}

int main(){
    cin >> n >> m;
	for(int i=0; i<m; ++i){
		cin >> e[][i] >> e[i][2] >> e[i][0];
		--e[i][0], --e[i][2];
	}
	
	sort(e, e+m);
	iota(p, p+n, 0);
	int ai=0;
	ll a2=0;
	for(int i=0; i<m; ++i)
		if(join(e[i][1], e[i][2]))
			++a1, a2+=e[i][0];
	if(a1<n-1)
		cout << "IMPOSSIBLE";
	else
		cout << a2;

}