#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	ll a,b,c,sum=0;
	cin >> a>>b>>c;
	for (int i = 1; i<=a; ++i)
	{
		for (int j = 1; j <=b; ++j)
		{
			for (int k = 1; k <=c; ++k)
			{
				sum += i*j*k;
			}
		}
	}
	cout << sum;
	return 0;
}