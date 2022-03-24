#include<bits/stdc++.h>
using namespace std;
int A[25],N,d; bool B[25],xuoi[25],nguoc[25];
void Try(int i){
	for(int j=1;j<=N;j++){
		if(!B[j] && !xuoi[i-j+N] && !nguoc[i+j-1]){
			A[i]=j; B[j]=true;
			xuoi[i-j+N]=true;	nguoc[i+j-1]=true;
			if(i==N)	d++;
			else	Try(i+1);
			B[j]=false;
			xuoi[i-j+N]=false;	nguoc[i+j-1]=false;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> N;	d=0;
		for(int i=1;i<=10;i++)	B[i]=false;
		for(int i=1;i<=20;i++){
			xuoi[i]=false;	nguoc[i]==false;
		}
		Try(1);
		cout << d << endl;
	}
}
