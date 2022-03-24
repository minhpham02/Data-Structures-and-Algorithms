#include<bits/stdc++.h>
using namespace std;
int A[15][15],OK,N;
string S;
void Try(int i,int j){
	if(i==N && j==N){
		OK=1;	cout << S << " ";	
		return;
	}
	if(A[i+1][j]==1){
		S += "D";
		Try(i+1,j);
		S.erase(S.length()-1);
	}if(A[i][j+1]==1){
		S += "R";
		Try(i,j+1);
		S.erase(S.length()-1);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> N;
		OK=0; S="";
		for(int i=1;i<=N;i++){
			for(int j=1;j<=N;j++){
				cin >> A[i][j];
			}
		}
		if(A[1][1]==0){
			cout << -1 << endl; continue;
		}
		Try(1,1);
		if(OK==0)	cout << -1 << endl;
		else cout << endl;
	}
}
