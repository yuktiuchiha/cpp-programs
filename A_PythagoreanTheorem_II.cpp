#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	ll n, temp=0, w=0, count=0;
	cin >> n;
	for (int i = 1; i <= n; ++i){
		for(int j=i+1; j<=n; j++){
			temp = i*i + j*j;
			w = sqrt(temp);
			if((w*w) == temp && w <= n){
				count++;
			}
		}
	}
	cout << count;
	return 0;
}