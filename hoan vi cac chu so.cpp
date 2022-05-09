#include<bits/stdc++.h>
using namespace std;
int n,k,A[10][10],B[20]={0},C[20],M=1e9+7;
void in(){
	int i,j,max=-1e9+7,min=1e9+7;
	for(i=0;i<n;i++){
		int h=0;
		for(j=1;j<=k;j++){
			h = h*10 + A[i][C[j]-1];
		}
		if(h>max) max=h;
		if(h<min) min=h;
	}
	if(M>max-min)	M=max-min;
}
void Try(int i){
	int j;
	for(int j=1;j<=k;j++){
		if(B[j]==0){
			C[i]=j;	B[j]=1;
			if(i==k) in();
			else Try(i+1);
			B[j]=0;
		}
	}
}
int main(){
	cin >> n >> k;
	string s;
	for(int i=0;i<n;i++){
		cin.ignore();
		cin >> s;
		for(int j=0;j<k;j++){
			A[i][j]=s[j]-'0';
		}
	}
	Try(1);
	cout << M << endl;
}
