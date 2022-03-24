#include<bits/stdc++.h>
using namespace std;
int N,S,A[20][20];	bool B[20];
vector<int>C(11);
vector<vector<int> >D;
void in(){
	int M=0;
	for(int i=1;i<=N;i++)	M+=A[i][C[i]];
	if(M==S)	D.push_back(C);
}
void Try(int i){
	for(int j=1;j<=N;j++){
		if(B[j]==false){
			B[j]=true;	C[i]=j;
			if(i==N)	in();
			else Try(i+1);
			B[j]=false;
		}
	}
}
int main(){
	cin >> N >> S;
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			cin >> A[i][j];
		}
	}
	Try(1);
	cout << D.size() << endl;
	for(int i=0;i<D.size();i++){
		for(int j=1;j<=N;j++){
			cout << D[i][j] << ' ';
		}
		cout << endl;
	}
}
