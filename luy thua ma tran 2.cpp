#include<bits/stdc++.h>
using namespace std;
int M = 1e9+7,N,K;
struct Matran{
	long long F[15][15];
};
Matran operator*(Matran A,Matran B){
	Matran C; int i,j,k;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			C.F[i][j]=0;
			for(k=0;k<N;k++){
				C.F[i][j] = (C.F[i][j] + A.F[i][k]*B.F[k][j]%M)%M;		
			}
		}
	}
	return C;
}
Matran powMod(Matran A,int n){
	if(n==1)	return A;
	Matran X = powMod(A,n/2);
	if(n%2==0)	return X*X;
	return A*X*X;
}
int main(){
	int t,i,j;
	cin >> t;
	while(t--){
		cin >> N >> K;
		Matran A;
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				cin >> A.F[i][j];
			}
		}
		Matran KQ = powMod(A,K);
		long long H=0;
		for(i=0;i<N;i++){
			H = (H+KQ.F[i][N-1])%M;
		}
		cout << H << endl;
	}
}
