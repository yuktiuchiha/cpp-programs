#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int a[m],b[m];
	for (int i = 0; i < m; ++i){
		cin >> a[i];
		b[i]=a[i];
	}
	sort(a,a+m);
    sort(b,b+m);
	int k=n, l=n, min=0, max=0;
	for (int i = 0; i < m; ++i){
		while(a[i]!=0){
		    if (l>=0){
				min += a[i];
				a[i]--;
				l--;
			}
		}
	}
	for(int i=m-1; i>=0; i--){
	 	while(b[i]!=0){
		    if (k>=0){
				max += b[i];
				b[i]--;
				k--;
		    }
	    }
	}
	cout << max << " "<< min;
	return 0;
}



#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,k;
	cin >> n >> m;
	int a[m];
	priority_queue<int> p;
	for (int i = 0; i < m; ++i){
		cin >> a[i];
		p.push(a[i]);
	}
	sort(a, a+m);
	int max=0, min=0;
	k=n;
	while(k>0){
		max += p.top();
		int temp = p.top();
		p.pop();
		p.push(--temp);
		k--;
	}
	cout << max;
	for (int i = 0; i < m; ++i){
		if (n>0){
			min += a[i];
			a[i]--;
			n--;
		}
		if (a[i]>0){
			i--;
		}
		if (n==0){
			break;
		}
	}
	cout << " " << min;
	return 0;
}