#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	ll n, max=INT_MIN;
	cin >> n;
	map<int, vector<int>> m;
	for(int i=0; i<n; i++){
		ll temp;
		cin >> temp;
		m[temp].push_back(i);
	}
	for(auto i=m.begin(); i!=m.end(); i++){
	    ll temp = m[i->first].size();
		if (max<temp){
			max=temp;
		}
	}
	if (n%2==0){
		if (max<=n/2){
			cout << "YES";
		} else{
			cout << "NO";
		}
	}
	if (n%2!=0){
		if (max<=(n/2)+1){
			cout << "YES";
		} else{
			cout << "NO";
		}
	}
	return 0;
}