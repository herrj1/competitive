#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mxN =2e5;
int n,p[mxN];


int main(){
    cin >> n;
	for(int i=0; i<n; ++i)
		cin >> p[i];
	sort(p,p+n);
	ll x=p[n/2];
	ll ans =0;
	for(int i=0;i<n;++i)
		ans+=abs(p[i]-x);
	cout << ans;
}