#include<bits/stdc++.h>
using namespace std;

int func(vector<int> &a)
{
	if(a.size()==1){
		return 0;
	}
	int dif=a[1]-a[0];
	for(int i=0; i<a.size()-1; i++){
		if(a[i+1]-a[i]!=dif){
			return -1;
		}
	}
	return dif;
}

int main()
{
	int n;
	cin >> n;
	map<int, vector<int>> m;
	vector<pair<int, int>> ans;
	for(int i=0; i<n; i++){
		int temp;
		cin >> temp;
		m[temp].push_back(i);
	}
	for(auto itr=m.begin(); itr!=m.end(); itr++){
		int diff=func(itr->second);
		if(diff!=-1){
			ans.push_back(make_pair(itr->first, diff));
		}
	}
	cout << ans.size() << endl;
	for (int i = 0; i < ans.size(); ++i){
		cout << ans[i].first << " " << ans[i].second << endl;
	}
	return 0;
}