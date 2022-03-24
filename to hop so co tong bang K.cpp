#include<bits/stdc++.h>
using namespace std;
int N,K,A[35],B[35],OK;
void in(int i){
	cout << "[";
	for(int j=1;j<i;j++){
		cout << B[j] << " ";
	}cout << B[i] << "]";
}
void Try(int i,int sum){
	for(int j=1;j<=N;j++){
		if(A[j] >= B[i-1] && sum+A[j] <= K){
			sum += A[j];
			B[i] = A[j];
			if(sum==K){
				in(i);	OK=1;
			}else	Try(i+1,sum);
				sum -= A[j];
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> N >> K;
		for(int i=1;i<=N;i++)	cin >> A[i];
		OK=0;	B[0]=0;
		Try(1,0);
		if(OK==0)	cout << -1;
		cout << endl;
	}
}
