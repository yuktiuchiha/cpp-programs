#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	int minf=INT_MAX;
	int maxf=INT_MIN;
	int mins=INT_MAX;
	int maxs=INT_MAX;
	string s;cin>>s;
	int cminf=INT_MAX;
	int cmaxf=INT_MIN;
	int cmins=INT_MAX;
	int cmaxs=INT_MAX;
	
	for(int i=0;i<s.length()/2;i++){
		if(int(s[i])<=minf){
			cminf=s[i];
		}
		if(int(s[i]>=maxf)){
			cmaxf=s[i];
		}
		if(int(s[s.length()/2+i])<=mins){
			cmins=s[s.length()/2+i];
		}
		if(int(s[s.length()/2+i]>=maxs)){
			cmaxs=s[s.length()/2+i];
		}
	}
	if(cminf<cmins){
		cout<<"YES";
		return 0;
	}
	if(cminf>cmaxs){
		cout<<"YES";
		return 0;
	}
	if(cmaxf<cmins){
		cout<<"YES";
		return 0;
	}
	cout<<"NO";
	return 0;
}