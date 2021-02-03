#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL);

int main()
{	
	fastio
	ll n,m,count=0,w=0;
	cin >> n>>m; char a[n][m];
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j){
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m-1; ++j){
			if (a[i][j]=='P' && a[i][j+1]=='W'){
				count++;
				a[i][j+1]='.';
				a[i][j]='.';
				j++;
			}
			else if (a[i][j]=='W' && a[i][j+1]=='P'){
				count++;
				a[i][j]='.';
				a[i][j+1]='.';
				j++;
			}
		}
	}
	// for (int i = 0; i < n; ++i){
	// 	for (int j = 0; j < m; ++j){
	// 		cout << a[i][j];
	// 	}cout<<endl;
	// }cout<<endl;
	for (int j = 0; j < m; ++j){
		for (int i = 0; i < n-1; ++i){
				if (a[i][j]=='P' && a[i+1][j]=='W'){
					count++;
					a[i+1][j]='.';
					a[i][j]='.';
					i++;
				}
				else if (a[i][j]=='W' && a[i+1][j]=='P'){
					count++;
					a[i][j]='.';
					a[i+1][j]='.';
					i++;
				}
		}
	}
	// for (int i = 0; i < n; ++i){
	// 	for (int j = 0; j < m; ++j){
	// 		cout << a[i][j];
	// 	}cout<<endl;
	// }cout<<endl;
	cout<<count;	
	return 0;
}