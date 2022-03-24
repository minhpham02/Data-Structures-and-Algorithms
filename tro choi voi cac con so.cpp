#include<bits/stdc++.h>
using namespace std;
int A[11],N;	bool B[11];
int check(){
	for(int i=1;i<=N-1;i++){
		if(abs(A[i]-A[i+1])==1)	return 0;
	}return 1;
}
void in(){
	if(check()){
		for(int i=1;i<=N;i++){
			cout << A[i];
		}
		cout << endl;
	}
}
void Try(int i){
	for(int j=1;j<=N;j++){
		if(B[j]==false){
			A[i]=j;	B[j]=true;
			if(i==N)	in();
			else Try(i+1);
			B[j]=false;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> N;
		for(int i=1;i<=N;i++)	B[i]=false;
		Try(1);
	}
} 
