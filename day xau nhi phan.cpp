#include<bits/stdc++.h>
using namespace std;
int F[100];
int Fibo(int n,int k){
	if(n==1)	return 0;
	if(n==2)	return 1;
	if(k <= F[n-2])	return Fibo(n-2,k);
	return Fibo(n-1,k-F[n-2]);
}
int main(){
	F[0]=0,F[1]=1;
	for(int i=2;i<=92;i++)	F[i]=F[i-1]+F[i-2];
	int t,n,k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		cout << Fibo(n,k) << endl;
	}
}
