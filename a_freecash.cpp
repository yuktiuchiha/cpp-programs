#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL);

int main()
{	
	fastio
	ll n,count=1,max=0;
	cin >> n;
	pair<int,int> p[n];
	for (int i = 0; i < n; ++i){
		ll temp1,temp2;
		cin >>temp1>>temp2;
		p[i].first=temp1;
		p[i].second=temp2;
	}
	for (int i = 0; i < n-1; ++i){
		if(p[i].first==p[i+1].first && p[i].second==p[i+1].second){
			count++;
		}
		else{
			if (count>max){
				max=count;
				//count=1;
			}
			count=1;
		}
	}
	if(count>max){
	    cout<<count;
	}else{
	    cout<<max;	    
	}
	return 0;
}