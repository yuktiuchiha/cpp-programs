#include<bits/stdc++.h>
using namespace std;

int func(vector<int> &a){
    return (a.size()%2);
}

int main(){
    string s;
    cin >> s;
    map<char, vector<int>> m;
    for(int i=0; i<s.size(); i++){
        m[s[i]].push_back(i);
    }
    int count=0;
    for (auto i = m.begin(); i != m.end(); ++i) {
        int l = func(i->second);
        //count += l;
        if(l==1){
            count++;
        }
    }
    if(count==0){
        cout << "First";
    }
    else{
        if(count%2==0){
            cout << "Second";
            return 0;
        }
        else{
            cout << "First";
            return 0;
        }
    }
    return 0;
}