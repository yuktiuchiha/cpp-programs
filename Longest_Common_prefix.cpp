#include<bits/stdc++.h>
using namespace std;
void u_y()
{
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
string longestCommonPrefix(vector<string> &A) {
    string ans;
    int size= A.size();
    for(int i=0;i<A[0].length();i++){
        for(int j=0;j<size;j++){
            if(A[j][i]!=A[0][i]){
                return ans;
            }
        }
        ans += A[0][i];
    }
    
    return ans;
}
int main()
{
    u_y();
    vector<string>A;
    int t;cin>>t;
    string temp;
    for(int i=0;i<t;i++){
        cin >> temp;
        A.push_back(temp);
    }
    cout<<longestCommonPrefix(A);
    return 0;
}