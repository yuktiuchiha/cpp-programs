#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL);

int main()
{	
	fastio
	ll n, steps=0;
	cin >> n;
	ll a[n];
	for (ll i = 0; i < n; ++i){
		cin >>a[i];
	}
	sort(a,a+n);
	for (int i = 0; i < n; ++i){
		if (a[i]!=i+1){
			steps += abs(i+1-a[i]);
		}
		else{
			continue;
		}
	}
	cout << steps;
	return 0;
}