#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{	
	ll n, a, b, c, d, max=INT_MIN;
	vector<int> v;
	cin >> n>>a>>b>>c;
	if (n%a==0){
		v.push_back((n/a)*1);
	}
	if (n%b==0){
		v.push_back(n/b);		
	}
	if (n%c==0){
		v.push_back(n/c);
	}
	if (n%(a+b)==0){
		v.push_back(2*(n/(a+b)));
	}
	if (n%(c+b)==0){
		v.push_back(2*(n/(c+b)));
	}
	if (n%(a+c)==0){
		v.push_back(2*(n/(a+c)));
	}
	if (n%(a+b+c)==0){
		v.push_back(3*(n/(c+a+b)));
	}
	for (int i = 0; i < v.size(); ++i){
		if (v[i]>max){
			max=v[i];
		}
	}
	cout << max;
	return 0;
}