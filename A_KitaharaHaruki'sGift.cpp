#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	ll n, c1=0, c2=0;
	cin >> n;
	ll a[n];
	for(ll i=0; i<n; i++){
		cin >> a[i];
		if(a[i]==100){
			c1++;
		}
		if(a[i]==200){
			c2++;
		}
	}
	if(c1%2==0 && c2%2==0 || c1>0 && c1%2==0 && c2%2!=0){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	return 0;
}