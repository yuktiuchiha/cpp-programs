#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	ll n;
//	cin >> n;
	string s1, s2;
	getline(cin, s1);
    getline(cin, s2);
	int a1[26]={}, a2[26]={}, A1[26]={}, A2[26]={};
	for (int i = 0; i < s1.length(); ++i){
		if(int(s1[i])>=95 && int(s1[i])<=122){
			a1[int(s1[i])-int('a')]++;
		}
		if(int(s1[i])>=65 && int(s1[i])<=90){
			A1[int(s1[i])-int('A')]++;
		}
	}
	for (int i = 0; i < s2.length(); ++i){
		if(int(s2[i])>=95 && int(s2[i])<=122){
			a2[int(s2[i])-int('a')]++;
		}
		if(int(s2[i])>=65 && int(s2[i])<=90){
			A2[int(s2[i])-int('A')]++;
		}
	}
	int count = 0;
	for (int i = 0; i < 26; ++i)
	{
		if(a1[i]>=a2[i] && A1[i]>=A2[i]){
			count++;
		}
	}
	if (count==26){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	return 0;
}