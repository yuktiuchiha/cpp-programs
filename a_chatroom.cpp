    #include<bits/stdc++.h>
    using namespace std;
    #define f(n) for (int i = 0; i < (int)(n); ++i)
    #define ll long long
    int main()
    {
    	string s;
    	cin >> s;
    	int count =0;
    	
    	for (int i = 0; i < s.length(); ++i)
    	{
    		if(s[i]!='h'){
    			count++;
    		}
    		else{
    			break;
    		}
    	}
    	for (int i = count ; i < s.length(); ++i)
    	{
    		if(s[i]=='e'){
    			count++;
    			break;
    		}
    		else {
    			count++;
    		}
    		
    	}
    	for (int i = count ; i < s.length(); ++i)
    	{
    		if(s[i]=='l'){
    			count++;
    			break;
    		}
    		else {
    			count++;
    		}
    	}
    	for (int i = count ; i < s.length(); ++i)
    	{
    		if(s[i]=='l'){
    			count++;
    			break;
    		}
    		else {
    			count++;
    		}
    		
    	}
    	for (int i = count ; i < s.length(); ++i)
    	{
    		
    		if(s[i]=='o'){
    			cout << "YES";
    			return 0;
    			break;
    		}
    		
    	}
    	cout << "NO";
    	return 0;
    }