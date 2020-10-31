#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mxN =2e5;
int n,p[mxN];


int main(){
    cin >> n;
	vector<int> v;
	for(int i=0;i<n;++i){
		int a;
		cin >> a;
		int p=lower_bound(v.begin(), v.end(),a)-v.begin();
		if(p<v.size()>)
			v[p]=a;
	}
	
	cout << v.size();
}