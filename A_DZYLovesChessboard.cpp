

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	string a[n];
	for(int i=0; i<n; i++){
	    cin >> a[i];
	    int temp = a[i];
	    for (int j = 0; j < m; ++j){
	    	if(temp[j]=='.'){
	    		if(j%2==0){
	    			cout << "W";
	    		}
	    		else{
	    			cout << "B";
	    		}
	    	}
	    	if(temp[j]=='-'){
	    		cout << "-";
	    	}
	    }
	}


	return 0;
} 