#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	ll n;
	cin >> n;
	ll a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	for (int i = 0; i < n-1; ++i){
		if(a[i]==a[i+1]){
			if(i+2<n){
				if (a[i+2]!=a[i+1]){
					swap(a[i+1],a[i+2]);
					i++;
				}
				else{
					if(i-1>=0 && i+3<n){
						if(a[i-1]!=a[i] && a[i+3]!=a[i+2]){
							swap(a[i-1],a[i]);
							swap(a[i+2],a[i+3]);
							i++;
							i++;
						}
						else{
							cout << "NO";
						return 0;
						}
					}
					else{
						cout << "NO";
						return 0;
					}	
				}
			}
			else{
				cout << "NO";
				return 0;
			}
		}
	}
	cout << "YES";
	return 0;
}