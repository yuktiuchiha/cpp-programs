#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	ll n=0,count=0;
	string s,ans;
	cin >> s;
	for(int i=0; i<s.size(); i++){
		if(s[i]=='0' && s[i+1]=='1' || s[i]=='0' && s[i+1]=='0' || s[i]=='0'){
			if(i+1<s.size()){
    			n=i;
    			for(int j=n+1; j<s.size(); j++){
            		ans += s[j];
            	}
    			break;
    		}
    		if(i+1>=s.size()){
    		    for(int j=0; j<n-1; j++){
    		        ans += s[j];
    		    }
    		    break;
    		}
		}	
		else{
			count++;
		    ans += s[i];
		    if(count==s.size()){
		    	for(int j=0; j<s.size()-1; j++){
    		        cout <<ans[i];
    		    }cout<<endl;
    		    return 0;
		    }
		}
	}
	cout << ans;
	return 0;
}