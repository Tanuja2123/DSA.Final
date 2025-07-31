#include "bits/stdc++.h"
using namespace std;

int main() {
	// your code goes here
	int n, c;
	int mod= 1e9+7;
	cin >>n>>c;
	vector<int>coins(n);
	for(int i=0; i<n; i++){
	    cin>>coins[i];
	}
	vector<int>dp(c+1, 0);
	dp[0]=1;
	for(int i=1; i<=c; i++){
	    for(int j=0; j<n; j++){
	        if(coins[j]<=i){
	            dp[i]= (dp[i]+ dp[i-coins[j]])%mod;
	        }
	    }
	}
	cout<<dp[c]<<endl;
	return 0;
	

}
