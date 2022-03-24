#include<bits/stdc++.h>
using namespace std;
int N,A[15][15],OK,check[15][15];
string res;
void Try(int i,int j){
	if(i==N && j==N){
		OK=1; cout << res << " ";
		return;
	}	check[i][j]=1;
	if(i<N && A[i+1][j]==1 && check[i+1][j]==0){
		res += "D";
		Try(i+1,j);
		res.erase(res.length()-1);
	}if(j>=1 && A[i][j-1]==1 && check[i][j-1]==0){
		res += "L";
		Try(i,j-1);
		res.erase(res.length()-1);
	}if(j<N && A[i][j+1]==1 && check[i][j+1]==0){
		res += "R";
		Try(i,j+1);
		res.erase(res.length()-1);
	}if(i>=1 && A[i-1][j]==1 && check[i-1][j]==0){
		res += "U";
		Try(i-1,j);
		res.erase(res.length()-1);
	}
	check[i][j]=0;
}
int main(){
	int t,i,j;
	cin >> t;
	while(t--){
		OK=0,res = "";
		cin >> N;
		for(i=1;i<=N;i++){
			for(j=1;j<=N;j++){
				cin >> A[i][j];
			}
		}
		if(A[1][1]==0){
			cout << -1 << endl; continue;
		}
		Try(1,1);
		if(OK==0)	cout << "-1\n";
		else cout << endl;
	}
}
