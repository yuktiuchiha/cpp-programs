    #include<bits/stdc++.h>
    using namespace std;
     
    #define ll long long int
    #define fastio ios_base::sync_with_stdio(false),cin.tie(NULL);
     
    int main()
    {	
    	fastio
    	ll x,y;
    	cin >> x>> y;
    	//ll x2 = 3*x/2;
    	//ll y1 = 3*y;
    	if(x>=0 && y>=0){
    		ll x2 = x+y;
    		ll y1 = x+y;
    	    cout << "0 "<< y1<<" "<< x2<<" " << "0";
    	}
    	if(x<0 && y>=0){
    		ll x2 = x-y;
    		ll y1 = -x+y;    		
    	    cout << x2<<" " << "0 "<< "0 "<< y1;
    	}
    	if (x<0 && y<0){
    		ll x2 = x+y;
    		ll y1 = x+y;
    		cout << x2<<" " << "0 "<< "0 "<< y1;
    	}
    	if(x>=0 && y<0){
    		ll x2 = x-y;
    		ll y1 = -x+y;    		
    	    cout << "0 "<< y1<<" "<< x2<<" " << "0";
    	}
    	return 0;
    }