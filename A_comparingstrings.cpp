#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	int diff=0;
	string s1, s2;
	cin >> s1 >> s2;
	if(s1.size()!=s2.size()){
		cout << "NO";
	    return 0;
	}
	if(s1==s2){
	    cout << "YES";
	    return 0;
	}
	for(ll i=0; i<s1.size(); i++){
		if(s1[i]!=s2[i]){
			diff++;
		}
	}
	if(diff>2 || diff==1){
		cout << "NO";
	    return 0;
	}
	ll a1[26]={}, count = 0;
	ll a2[26]={};
	for (ll i = 0; i < s1.length(); ++i){
		a1[int(s1[i])-int('a')]++;
	}
	for (ll i = 0; i < s2.length(); ++i){
		a2[int(s2[i])-int('a')]++;
	}
	for (int i = 0; i < 26; ++i){
		if (a1[i]==a2[i]){
			count++;
		}
		else{
			cout << "NO";
			return 0;
		}
	}
	if(count==26){
		cout << "YES";
		return 0;
	}
	return 0;
}	