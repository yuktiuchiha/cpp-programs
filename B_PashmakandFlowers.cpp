#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n, max=INT_MIN, min=INT_MAX, m=0, M=0, sum=0;
	cin >> n;
	long long a[n];
	for(int i=0; i<n; i++){
	    cin >> a[i];
	    if(a[i]<min){
	        min=a[i];
	    }
	    if(a[i]>max){
	        max=a[i];
	    }
	}
	for (int i = 0; i < n; ++i){
		if(a[i]==max && a[i]>min){
		    M++;
		}
		if(a[i]==min){
		    m++;
		}
	}
	if(max!=min){
	    cout << max-min << " " << M*m;
	}
	if(max==min){
	    for(int i=1; i<n; i++){
	        sum += n-i;
	    }
	    cout << max-min << " " << sum;
	}
	return 0;
} 