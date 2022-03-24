#include<bits/stdc++.h>
using namespace std;
int C[17][17],N,c=1e18,sum=1e18,A[17],S;	bool check[17];
void Try(int i){
	for(int j=2;j<=N;j++){
		if(check[j]==false){
			A[i]=j;	check[j]=true;
			S += C[A[i-1]][j];
			if(i==N){
				if(S + C[j][1] < sum)	sum = S + C[j][1];
			}
			else if(S + c*(N-i+1) < sum)	Try(i+1);
			S -= C[A[i-1]][j];	check[j]=false;
			}
		}
	}
int main(){
	cin >> N;
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			cin >> C[i][j];
			if(C[i][j]<c && C[i][j]!=0)	c=C[i][j];
		}
	}
	A[1]=1; check[1]=1;
	Try(2);
	cout << sum << endl;
}
