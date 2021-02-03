#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL);

int main()
{	
	fastio
	int r,c,row=0,col=0;
	cin >> r >> c;
	char a[r][c];
	vector<int> rs,cs;
	for(int i=0; i<r; i++){
		for (int j = 0; j < c; ++j){
			cin >> a[i][j];
			if (a[i][j]=='S'){
				rs.push_back(i);
				cs.push_back(j);
			}
		}
	}
	for (int i = 0; i < rs.size(); ++i){
		if(rs[i]!=rs[i+1]){
			row++;
		}
		else if(rs[i]==rs[i+1]){
			row++;
			i++;
		}
	}
	for (int i = 0; i < cs.size(); ++i){
		if(cs[i]!=cs[i+1]){
			col++;
		}
		else if(rs[i]==rs[i+1]){
			col++;
			i++;
		}
	}
	cout <<(r-row)*c+(c-col)*r-(r-row)*(c-col); 	
	return 0;
}