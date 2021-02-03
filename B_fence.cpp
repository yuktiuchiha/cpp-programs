    #include<bits/stdc++.h>
    using namespace std;
     
    int main()
    {
    	int n,k,count=0;
    	int min = INT_MAX, index=0;
    	cin >> n >> k;
    	int a[n];
        int sum[n-k+1]={0};
    	for(int i=0; i<n; i++){
    		cin >> h[i];
    	}
    	for(int i=0; i<=n-k; i++){
            if(a[i]==a[i+1]){
                count++;
            }
    	}
        if(count==n){
            cout << "1";
            return 0;
        }
        else{
            for(int i=0; i<=n-k; i++){
                for(int j=0; j<k; j++){
                sum[i]=sum[i]+a[i+j];   
                }   
                if(sum[i]<min){
                    min = sum[i];
                    index = i+1;
                }
            }
        }
    	cout << index;
    	return 0;
    }