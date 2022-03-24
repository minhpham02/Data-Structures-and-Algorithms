#include<bits/stdc++.h>
using namespace std;
int A[11],B[11],sum,S,N,OK=0;
void in(int h){
	cout << "[";
	for(int i=1;i<h-1;i++)	cout << B[i] << ' ';
	cout << B[h-1] << "] ";
}
void Try(int i,int sum,int k){
	if(sum==S){
		in(i);	OK=1;
	}
	for(int j=k;j<=N;j++){
		sum += A[j];
		B[i] = A[j];
		if(sum<=S)	Try(i+1,sum,j+1);
		sum-=A[j];
	}
}	
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> N >> S;
		for(int i=1;i<=N;i++)	cin >> A[i];
		sort(A+1,A+N+1);
		Try(1,0,1);
		if(OK==0)	cout << -1;
		cout << endl;
		OK=0;
	}
}
