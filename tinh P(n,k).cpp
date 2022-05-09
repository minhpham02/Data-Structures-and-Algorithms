#include<bits/stdc++.h>
using namespace std;
int n,k,M=1e9+7,dp[1005][1005];
void solve(){
	int i,j;
	for(i=0;i<=1000;i++)	dp[i][0]=1;
	for(i=1;i<=1000;i++){
		for(j=1;j<=i;j++){
			dp[i][j]=(dp[i-1][j]+j*dp[i-1][j-1])%M;
		}
	}
}
	
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		solve();
		cout << dp[n][k] << endl;
	}
}
