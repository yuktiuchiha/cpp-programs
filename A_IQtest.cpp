#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL);

int main()
{	
	fastio
	char a[4][4];
	for (int i = 0; i < 4; ++i){
		for (int j = 0; j < 4; ++j){
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < 3; ++i){
		for (int j = 0; j < 3; ++j){
			if (a[i][j]==a[i][j+1] && a[i][j]==a[i+1][j]){
				cout <<"YES";
				return 0;
			} 
			else if(a[i][j]!=a[i][j+1] && a[i][j]!=a[i+1][j] && a[i][j]!=a[i+1][j+1]){
				cout <<"YES";
				return 0;
			}
			else if(a[i][j]!=a[i][j+1] && a[i][j]==a[i+1][j] && a[i][j]==a[i+1][j+1]){
				cout <<"YES";
				return 0;
			}			
		}
	}	
	cout <<"NO";
	return 0;
}