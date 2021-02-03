#include<bits/stdc++.h>
using namespace std;

#define ll long long int


int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	ll n,m;
	cin >> n>>m;
	if(n==m){
		for (int i = 0; i < m; ++i){
			cout <<"GB";
		}
		return 0;
	}
	else{
		for(int i=0; i<min(m,n); i++){
			if(n>m)
			{cout <<"BG";}
			if(n<m){cout << "GB";}
		}
		for(int i=0; i<max(n,m)-min(n,m); i++){
			if(n>m){
				cout <<"B";
			} 
			if(m>n){
				cout <<"G";
			}
		}
	}
	return 0;
}