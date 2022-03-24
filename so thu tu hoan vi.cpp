#include<bits/stdc++.h>
using namespace std;
int N,A[20],B[20],d=1;	bool C[20];
int check(){
	for(int i=1;i<=N;i++){
		if(A[i]!=B[i])	return 1;
	}
	return 0;
}
void in(){
	if(check())	d++;
	else cout << d;
}
void Try(int i){
	for(int j=1;j<=N;j++){
		if(C[j]==false){
			B[i]=j;	C[j]=true;
			if(i==N)	in();
			else Try(i+1);
			C[j]=false;
		} 
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> N;
		for(int i=1;i<=N;i++)	C[i]=false;
		for(int i=1;i<=N;i++)	cin >> A[i];
		Try(1);
		cout << endl;
		d=1;
	}
}
