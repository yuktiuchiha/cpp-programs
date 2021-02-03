#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{	
	ll n, k, max=INT_MIN, count=0;
	cin >> n >>k;
	pair<int,int> p[n];
	for (int i = 0; i < n; ++i){
		cin >> p[i].first >> p[i].second;		
	}
	sort(p,p+n,greater<>());
	for (int i = 0; i < n; ++i){
		for (int j = i+1; j < n; ++j){
			if(p[i].first==p[j].first){
				if (p[i].second>p[j].second){
					swap(p[i].second,p[j].second);
				}
			}
		}
	}
	for (int i = 0; i < n; ++i){
		if (p[k-1].first==p[i].first && p[k-1].second==p[i].second){
			count++;
		}
	}
	cout << count;
	return 0;
}