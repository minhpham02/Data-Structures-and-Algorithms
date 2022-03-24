#include<bits/stdc++.h>
using namespace std;
int A[20],B[20],N,K,d=1;
int check(){
	for(int i=1;i<=K;i++){
		if(A[i]!=B[i])	return 1;
	}
	return 0;
}
void in(){
	if(check())	d++;
	else cout << d << endl;
}
void Try(int i){
	for(int j=B[i-1]+1;j<=N-K+i;j++){
		B[i]=j;
		if(i==K)	in();
		else Try(i+1);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> N >> K;
		for(int i=1;i<=K;i++)	cin >> A[i];
		Try(1);
		d=1;
	}
}
