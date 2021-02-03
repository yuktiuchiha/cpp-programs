#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back;

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	ll n;
	cin >> n;
	vector<ll> v1,v2;
	map<ll, vector<ll>> m;
	for(ll i=0; i<2*n; i++){
		ll temp;
		cin >> temp;
		m[temp].push_back(i+1);
	}
	for(auto i=m.begin(); i!=m.end(); i++){
		ll temp = m[i->first].size();
		if(temp%2!=0){
			cout <<"-1";
			return 0;
		}
		if(temp%2==0){
			for(auto j=0; j<(temp/2); j++){
				v1.push_back(m[i->first][j]);
			}
			for(auto j=temp/2; j<temp; j++){
				v2.push_back(m[i->first][j]);
			}
		}
	}
	for(int i=0;i<v1.size();i++){
	    cout << v1[i]<<" "<<v2[i]<<endl;
	}
	return 0;
}	




#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	ll n;
	cin >> n;
	ll m=2*n;
	pair<int,int> p[m];
	for(ll i=0; i<m;i++){
		cin >> p[i].first;
		p[i].second = i+1;
	} 
	sort(p,p+m);
    for(auto i=0; i<m; i++){
		if(p[i].first != p[i+1].first){
			cout << "-1";
			return 0;
		}
		i++;
	}
	for(auto i=0; i<m; i++){
		cout << p[i].second << " "<< p[i+1].second<<endl;
		i++;
	}
	return 0;
}