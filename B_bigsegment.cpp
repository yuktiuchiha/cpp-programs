#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	ll n, max=INT_MIN,in1=0,in2=0,pos;
	cin >> n;
	vector<pair<int,int>> v;
	for(ll i=0; i<n; i++){
		ll temp1, temp2;
		cin >> temp1 >> temp2;
		v.push_back(make_pair(temp1,temp2));
		if(v[i].second-v[i].first>max){
			max=v[i].second-v[i].first;
			in1=v[i].first;
			in2=v[i].second;
			pos=i;
		}
	}
	for(ll i=0; i<n; i++){
		if(v[i].first>=in1 && v[i].first<=in2 && v[i].second>=in1 && v[i].second<=in2){
			continue;
		}
		else{
			cout << "-1";
			return 0;
		}
	}
	cout << pos+1;
	return 0;
}