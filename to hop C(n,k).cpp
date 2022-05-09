#include<bits/stdc++.h>
using namespace std;
int n,k,M=1e9+7,C[1005][1005];
void solve(){
	int i,j;
	for(i=0;i<=1000;i++){
		for(j=0;j<=i;j++){
			if(i==0 || j==0)	C[i][j]=1;
			else C[i][j]=(C[i-1][j-1]+C[i-1][j])%M;
		}
	}
}
	
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		solve();
		cout << C[n][k] << endl;
	}
}
