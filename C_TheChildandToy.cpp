#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL);

int main()
{	
	fastio
	ll n,m;
	cin >> n>>m;
	ll a[n];
	map<int,vector<int>> map;
	for (int i = 0; i < n; ++i){
		cin >> a[i];
	}
	for (int i = 0; i < m; ++i){
		ll a,b,it=0;
		cin>>a>>b;
		m[a].push_back(b);
	}
	ll count=0,pow=0,len=m.size(),min=INT_MAX;
	while(count<len){
		for(auto i=m.begin(); i!=m.end(); i++){
			if ((i->second).size()<min){
				min=(i->second).size();
				it=i;
			}
		}
		for (int i = 0; i < min; ++i){
			pow += a[m[it][i]-1];
			m[i].erase(it);
		}
		count++;
	}
	cout << pow;
	return 0;
}