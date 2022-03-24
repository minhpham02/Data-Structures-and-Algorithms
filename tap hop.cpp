#include<bits/stdc++.h>
using namespace std;
int A[11],N,K,S,d=0;
void in(){
	int count=0;
	for(int i=1;i<=K;i++){
		count += A[i];
	}
	if(count == S)	d++;
}
void Try(int i){
	for(int j=A[i-1]+1;j<=N-K+i;j++){
		A[i]=j;
		if(i==K)	in();
		else Try(i+1);
	}
}
int main(){
	while(cin >> N >> K >> S){
		if(N!=0 && K!=0 && S!=0){
			Try(1);
			cout << d << endl;
			d=0;
		}else break;
	}
}
