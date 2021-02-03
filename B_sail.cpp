#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
	ll n, sx,sy, ex, ey;
	cin >> n >> sx >> sy >> ex >> ey;
	string a;
		cin >> a;
	vector<char> v;
	if(ex-sx>0){
		for(ll i=0; i<(ex-sx); i++){
			v.push_back('E');
		}
	}
	if(ex-sx<0){
		for(ll i=0; i<abs(ex-sx); i++){
			v.push_back('W');
		}
	}
	if(ey-sy>0){
		for(ll i=0; i<(ey-sy); i++){
			v.push_back('N');
		}
	}
	if(ey-sy<0){
		for(ll i=0; i<abs(ey-sy); i++){
			v.push_back('S');
		}
	}
	ll len = v.size(), index=0, count=0;
	for (auto i = 0; i < n; ++i){
		for (auto j = 0; j < v.size(); ++j){
			if(a[i]==v[j]){
				v.erase(v.begin()+j);
				j--;
				count++;
				index=i;
			    if(count==len){
    				cout << index+1;
    				return 0;
			    }
				break;
			}
			
		}
	}
	cout << "-1";
	return 0;
}

//        efficient method


#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
	ll n, sx,sy, ex, ey;
	cin >> n >> sx >> sy >> ex >> ey;
	string a;
	cin >> a;
	ll fx=ex-sx;
	ll fy=ey-sy;
	ll count=0;
	for (ll i = 0; i < n; ++i){
	    if (fx==0 && fy==0){
		    break;
	    }
		count++;
		if (fx>0 && a[i]=='E'){
			//count++;
			fx--;
		}
		if (fx<0 && a[i]=='W'){
		//	count++;
			fx++;
		}
		if (fy>0 && a[i]=='N'){
		//	count++;
			fy--;
		}
		if (fy<0 && a[i]=='S'){
		//	count++;
			fy++;
		}
	}
	if (fx==0 && fy==0){
		cout << count;
		return 0;
	}
	cout << "-1";
	return 0;
}


