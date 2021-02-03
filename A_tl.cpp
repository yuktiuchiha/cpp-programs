#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	ll n, m, count=0;
	cin >> n >> m;
	ll a[n], b[m], min = INT_MAX;
	for (ll i = 0; i < n; ++i){
		cin >> a[i];
	}
	sort(a,a+n);
	for (ll i = 0; i < m; ++i){
		cin >> b[i];
		if(b[i]<=a[n-1]){
			cout << "-1";
			return 0;
		}
		if(b[i]<min){
		    min=b[i];
		}
	}
	for(ll i=0; i<n; i++){
		if(a[i]*2<=a[n-1]){
			count++;
		}
	}
		if (count>0){
			cout << a[n-1];
		}
		else if(count==0){
			if(n>1){
				for (int i = 0; i < n; ++i){
					if((2*a[i])<min){
			        	cout << 2*a[i];
			        	return 0;
			    	}	
				}
				cout << "-1";
			}
			else if(n==1){
		    	if(2*a[0]<min){
		    	    cout << 2*a[0];
		    	}
		    	else{
		    	    cout << "-1";
		    	}
			}
		}
	return 0;
}