#include<bits/stdc++.h>
using namespace std;
int A[505][505],N,M,C[505][505];
int tinh(){
	memset(C,0,sizeof(C));
	int i,j;
	for(i=2;i<=M;i++)	A[1][i] += A[1][i-1];
	for(i=2;i<=N;i++)	A[i][1] += A[i-1][1];
	for(i=1;i<=N;i++){
		for(j=1;j<=M;j++){
			A[i][j]=min(A[i-1][j],min(A[i][j-1],A[i-1][j-1]))+A[i][j];
		}
	}
	return A[N][M];		
}
int main(){
	int t,i,j;
	cin >> t;
	while(t--){
		cin >> N >> M;
		for(i=1;i<=N;i++){
			for(j=1;j<=M;j++){
				cin >> A[i][j];
			}
		}
		cout << tinh() << endl;
	}
}
