#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	ll n, k, index=0, c=0;
	cin >> n >> k;
	ll a[n];
	for(ll i=0; i<n; i++){
		cin >> a[i];
	}
	c=a[0];
	for (int i = 1; i < n; ++i){
		if(a[i]!=c){
			c=a[i];
			index=i;
		}
	}
	if(k>=index+1){
		cout << index;
	}
	else{
		cout << "-1";
	}
	return 0;
}