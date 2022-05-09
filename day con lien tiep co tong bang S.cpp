#include<bits/stdc++.h>
using namespace std;
int n,s,A[205],F[40005];
int kt(){
	int i,j;
	memset(F,0,sizeof(F));
	F[0]=1;
	for(i=1;i<=n;i++){
		for(j=s;j>=A[i];j--){
			if(F[j]==0 && F[j-A[i]]==1)
				F[j]=1;			
		}
	}
	return F[s];
}
int main(){
	int t,n,k;
	cin >> t;
	while(t--){
		cin >> n >> s;
		for(int i=1;i<=n;i++)	cin >> A[i];
		if(kt())	cout << "YES\n";
		else cout << "NO\n";
	}
}
