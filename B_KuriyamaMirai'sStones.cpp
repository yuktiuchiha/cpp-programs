#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL);

int main()
{	
	fastio
	ll n,m, sum=0;
	cin >> n;
	ll a[n],b[n];
	for (ll i = 0; i < n; ++i){
		cin >> a[i];
		b[i]=a[i];
	}
	sort(b, b+n);
	cin >> m;
	ll x[m],y[m],z[m];
	for (ll i = 0; i < m; ++i){
		cin >> x[i] >> y[i] >> z[i];
		if (x[i]==1){
			for (ll j = y[i]-1; j < z[i]; ++j){
				sum += a[j];
			}
			cout <<sum<<endl;
			sum=0;
		} 
		else{
			for (ll j = y[i]-1; j < z[i]; ++j){
				sum += b[j];
			}
			cout<<sum<<endl;
			sum=0;			
		}
	}
	return 0;
}



#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL);

int main()
{	
	fastio
	ll n,m;
	cin >> n;
	ll a[n], sum[n]={ }, ssum[n]={ };
	for (ll i = 0; i < n; ++i){
		cin >> a[i];
		if(i==0){
		    sum[0] = a[i];
		}
		else{
		    sum[i] = sum[i-1]+a[i];
		}
	}
	sort(a, a+n);
	for (ll i = 0; i < n; ++i){
		if(i==0){
		    ssum[0] = a[i];
		}
		else{
		    ssum[i] = ssum[i-1]+a[i];
		}
	}
	cin >> m;
	ll x[m],y[m],z[m];
	for (ll i = 0; i < m; ++i){
		cin >> x[i] >> y[i] >> z[i];
		if (x[i]==1){
			if(y[i]!=1){
				cout << sum[z[i]-1]-sum[y[i]-2]<<endl;
			}
			else{
				cout << sum[z[i]-1]<<endl;
			}
		}
		else{
			if(y[i]!=1){
				cout <<ssum[z[i]-1]-ssum[y[i]-2]<<endl;
			}
			else{
				cout << ssum[z[i]-1]<<endl;
			}
		}
	}
	return 0;
}