#include<bits/stdc++.h>
using namespace std;
int n,k,A[25],B[25];
void in(){
	for(int i=1;i<=k;i++) cout << A[B[i]] << " ";
	cout << endl;
}
void Try(int i){
	int j;
	for(j=B[i-1]+1;j<=n-k+i;j++){
		B[i]=j;
		if(i==k)	in();
		else Try(i+1);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i=1;i<=n;i++)	cin >> A[i];
		B[0]=0;
		sort(A+1,A+n+1);
		Try(1);
	}
}
