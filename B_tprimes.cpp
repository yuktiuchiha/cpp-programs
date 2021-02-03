
//   GIVES WRONG ANSWER IN CODEFORCES BUT RIGHT ANSWER IN CODECHEF IDE

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL);

int main()
{	
	fastio
	ll n, count=0;
	cin >> n;
	ll a[n];
	for (int i = 0; i < n; ++i){
		cin >> a[i];
		for(ll j=1;j<=sqrt(a[i]);j++){
			if(a[i]/sqrt(a[i])==sqrt(a[i])){
				if(a[i]%j==0){
					count++;
				}				
			}
		}
	}
	if(count==2){
		cout << "YES";
	}
	else{
		cout <<"NO";
	}
	return 0;
}




#include<bits/stdc++.h>
using namespace std;
bool isPrime(long long n)
{
    int skip=0;
    if(n<2)
        return false;
    else if(n==2)
        return true;
    long long limit=sqrt(n);
    if(n%2==0)
        return false;
        for(int j=3; j<=limit; j+=2){
            if(n%j==0)
                return false;
            }
    return true;
}
int main()
{
    long long num;
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>num;
        long long sqr=sqrt(num);
        if(sqr*sqr==num&&isPrime(sqr)==true)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}