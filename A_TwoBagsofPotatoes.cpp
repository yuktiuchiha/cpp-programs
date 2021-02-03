#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	ll y, k, n, count=0;
	cin >> y >> k >> n;
	if(n-y<=0 || y/k==n/k){
	    cout << "-1";
	    return 0;
	}
	for (ll i = y/k+1; i <=n/k; ++i){
		cout << (k*i)-y << " ";
	}
	return 0;
}