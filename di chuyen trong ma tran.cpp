#include<bits/stdc++.h>
using namespace std;
int A[105][105],N,M;
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> N >> M;
		for(int i=0;i<N;i++){
			for(int j=0;j<M;j++){
				cin >> A[i][j];
			}
		}
		for(int i=0;i<N;i++){
			for(int j=0;j<M;j++){
				if(i==0 || j==0)	A[i][j]=1;
				else A[i][j]=A[i-1][j] + A[i][j-1];
			}
		}
		cout << A[N-1][M-1] << endl;
	}
}
