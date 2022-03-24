#include<bits/stdc++.h>
using namespace std;
int A[25],N,K,OK,M;	bool B[25];
void Try(int s,int d){
	if(d==K){	OK=1; return;
	}if(OK=1)	return;
	for(int j=1;j<=N;j++){
		if(B[j]==false){
		 	B[j]=true;
			if(s == M)	Try(0,d+1);
			else if(s<M)	Try(s+A[j],d);
			else return;
		}
		B[j]=false;
	}
}
void xuly(){
	cin >> N >> K;
	OK=0,M=0;
	for(int i=1;i<=N;i++){
		cin >> A[i];
		M += A[i];
	}
	if(M % K != 0){	cout << 0 << endl; return;}
	else	M /= K; 
	Try(0,0);
	if(OK==1)	cout << 1 << endl;
	else cout << 0 << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		xuly();
	}
}

