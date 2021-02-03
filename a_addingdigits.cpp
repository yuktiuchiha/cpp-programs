#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL);

int main()
{	
	fastio
	ll a,b,n, count=0;
	cin >> a>>b>>n;
	string s = to_string(a);
	for (int i = 0; i <=9; ++i){
		if (((a*10)+i)%b==0){
			a = (a*10)+i;
			cout << a;
			count++;
			for (int j = 0; j < n-1; ++j){
				cout << "0";
			}
			break;
		}
	}
	if (count==0){
		cout<<"-1";
	}
	return 0;
}