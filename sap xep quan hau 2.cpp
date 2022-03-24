#include<bits/stdc++.h>
using namespace std;
int A[10][10],D;	bool xuoi[25],nguoc[25],B[25];
void Try(int i,int S){
	int j;
	for(j=1;j<=8;j++){
		if(!B[j] && !xuoi[i-j+8] && !nguoc[i+j-1]){
			S+=A[i][j];
			B[j]=true; xuoi[i-j+8]=true; nguoc[i+j-1]=true;
			if(i==8)	D=max(S,D);
			else Try(i+1,S);
			S -= A[i][j];
			B[j]=false; xuoi[i-j+8]=false; nguoc[i+j-1]=false;
		}
	}
}
int main(){
	int t,i,j;
	cin >> t;
	while(t--){
		for(i=1;i<=8;i++){
			for(j=1;j<=8;j++){
				cin >> A[i][j]; 
			} 
		}
		for(i=1;i<=10;i++)	B[i]=false;
		for(i=1;i<=20;i++){
			xuoi[i]=false; nguoc[i]=false;
		}
		D=0;
		Try(1,0);
		cout << D << endl;
	} 
}
