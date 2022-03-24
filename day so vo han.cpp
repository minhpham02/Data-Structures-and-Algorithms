#include<bits/stdc++.h>
using namespace std;
int M = 1e9+7;
struct Matran{
	long long F[2][2];
};
Matran operator*(Matran A,Matran B){
	Matran C;	int i,j,k;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			C.F[i][j]=0;
			for(k=0;k<2;k++){
				C.F[i][j] = (C.F[i][j]+A.F[i][k]*B.F[k][j]%M)%M;
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
	int t,n;
	Matran A;	A.F[0][0]=1,A.F[0][1]=1,A.F[1][0]=1,A.F[1][1]=0;
	cin  >> t;
	while(t--){
		cin >> n;
		Matran KQ = powMod(A,n);
		cout << KQ.F[1][0] << endl;
	}
}
