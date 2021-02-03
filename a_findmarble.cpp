#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL);

int main()
{	
	fastio
	ll n,s,t,count=0;
	cin >> n>>s>>t;
	ll a[n];
	for (int i = 0; i < n; ++i){
		cin >> a[i];
	}
	ll b[n] = {};
	b[s-1]=1;
	if (b[t-1]==1){
		cout << count;
		return 0;
	}
	while(count<n){
		ll c[n]={};
		for (int i = 0; i < n; ++i){
			c[a[i]-1]=b[i];
		}
		for (int i = 0; i < n; ++i){
			b[i]=c[i];
		}
		count++;
		if (c[t-1]==1){
			cout << count;
			return 0;
		}
	}
	cout << "-1";
	return 0;
}