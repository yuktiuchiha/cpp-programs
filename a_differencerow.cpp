#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL);

int main()
{	
	fastio
	ll n;
	cin >> n;
//	string s;
	ll a[n];
	for (int i = 0; i < n; ++i){
		cin >> a[i];
	}
	sort(a,a+n);
	cout<< a[n-1]<<" ";
	for (int i = 1; i < n-1; ++i){
		cout<<a[i]<<" ";
	}
	cout<<a[0];
	return 0;
}