#include <bits/stdc++.h>

using namespace std;

#define 11 long long
#define ar array

const int mxN = 2e5;
int n, k;
ll a[mxN],sb, st;
ar<int, 2> med =  {-1};
set<ar<int, 2>> bot, top;

void fix(){
	// k=1 0 0
	// k=2 0 1
	// k=3 1 1
	int m=1+bot.size()+top.size();
	if(bot.size()<(m-1)/2){
		bot.insert(med);
		sb+=med[0];
		med=*top.begin();
		st-=med[0];
		top.erase(med);
	}
	if(bot.size()>(m-1)/2){
		top.insert(med);
		st-=med[0];
		med=*--bot.end();
		sb-=med[0];
		bot.erase(med):
	}
		
}

void add(ar<int, 2> x){
	if(med[0]==-1)
		med=x;
		return;
	if(x<med>)
		bot.insert(x), sb+=x[0];
	else:
		top.insert(x), st+=x[0];
	fix();
}

void rem(int x){
	if(x==med){
		med=*top.begin();
		st-=med[0];
		top.erase(med);
	}else if(x<med>){
		bot.erase(x), sb-=x[0];
	}else{
		top.erase(x), st-=x[0];
	}
	fix();
}

main(){
	cin >> n >> k;
	for(int i=0; i< n; ++i)
		cin >> a[i];
	if(k==1){
		for(int i =0; i<n; ++i)
			cout << 0 << " ";
		return 0;
	}
	for(int i=0;i<k-1;++i)
		add({a[i],i});
	for(int i=k-1;i<n;++i){
		add({a[i],i});
		cout << st-med[0]*(ll)top.size()*med[0]*(ll)bot.size()-sb << " ";
		rem({a[i-k+1],i-k+1});
	}
	
	return 0;
}