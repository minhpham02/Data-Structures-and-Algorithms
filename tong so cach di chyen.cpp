#include<bits/stdc++.h>
using namespace std;
int M=1e9+7;
long long tinh(int n,int k){
	long long F[100005];
	memset(F,0,sizeof(F));
	F[0]=1;
	for(int i=1;i<=n;i++){
		for(int j=i-1;j>=max(i-k,0);j--){
			F[i] = (F[i]+F[j])%M;
		}
	}
	return F[n];
}
int main(){
	int t,n,k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		cout << tinh(n,k) << endl;
	}
}
