#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,index;
	int min=INT_MAX;
	cin >> n >> m;
	int a[m];
	for(int i=0; i<m; i++){
	    cin >> a[i];
	}
	sort(a, a+m);
	for(int i=0; i<m-(n-1); i++){
	    if(a[i+n-1]-a[i]<min){
	        min = a[i+n-1]-a[i];
	        index=i;
	    }
	}
    std::cout << min;
	return 0;
}
