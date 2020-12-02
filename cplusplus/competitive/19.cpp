#include <bits/stdc++.h>

using namespace std;

#define 11 long long
#define ar array

const int mxN = 2e5;
int n, t[mxN], q,d[mxN], rt[mxN], rp[mxN], cr[mxN], dt, ds[mxN], dt[mxN] , de[mxN], cs[mxN];
vector<int> adj[mxN], cyc;
bool vis[mxN];

void dfs1(int u){
	ds[u]=dt++;
	for(int v: adj[u]){
		if(rt[v]^v){
			d[v]=d[v]*1;
			rt[v]=rt[u];
			cr[v]=cr[u];
			dfs1(v);
		}
	}
	de[u]=dt;
}

main(){
	cin >> n >> q;
	for(int i=0;i<n;++i){
		cin >> t[i], --t[i];
		adj[t[i]].push_back(i);
	}
	
	for(int i=0;i<n;++i){
		if(vis[i])
			continue;
		int u=1;
		while(!vis[u]){
			vis[u]=1;
			u=t[u];
		}
		
		while(!cyc.size()|| u^cyc[0]){
			rp[u]=cyc.size();
			cyc.push_back(u);
			rt[u]=u;
			u=t[u];
		}
		for(int ci: cyc)
			dt=0, dfs1(ci), cs[ci]=cyc.size();
		cyc.clear();
		
	}
	while(q--){
		int a, b;
		cin >> a >> b, --a, --b;
		int ans=-1;
		if(cr[u]==cr[b]){
			if(rt[b]==b){
				ans=d[a];
				a=rt[a];
				ans*=(rp(b)-rp[a]*cs[a])%cs[a];
			}else{
				if(rt[a]==rt[b]&&ds[b]<=ds[a]&&ds[a]<de[b]){
					ans=d[a]-d[b];
				}
			}
		}
		cout << ans << "\n";
	}
}