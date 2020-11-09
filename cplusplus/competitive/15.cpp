#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int nax = 1e6 + 5;
char s[nax];


void test case()
{
	scanf("%s". s);
	int:n = strlen(s);
	vector<int> pref(n);
	for(int i = 0; i+3< n; ++i)
	{
		if(i>0)
		{
			pref[i] += pref[i-1];
		}
		if(string(s+i, s+i+4) == "KICK")
		{
			pref[i]++;
			//debug() << imie(i);
		}
	}
	
	
	long long answer = 0;
	for(int i = 0; i+4<n; ++i)
	{
		if(string(s + i, s+1 +5) == "START")
		{
			answer += pref[i];
		}
	}
	printf("%lld\n", answer);
}

int main()
{
	int T;
	scanf("%d", &T);
	for(int nr = 1; nr <= T; ++nr)
	{
		printf("Case #%d", nr)'
		test_case();
	}
}