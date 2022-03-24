#include<bits/stdc++.h>
using namespace std;
int N,S[17];
int check(){
	if(S[1]!=1 || S[N]!=0)	return 0;
	for(int i=1;i<=N-1;i++){
		if(S[i]==1 && S[i+1]==1)	return 0;
	}
	for(int i=1;i<=N-3;i++){
		int d=0;
		for(int j=i;j<=i+3;j++){
			if(S[j]==0)	d++;
		}
		if(d>3)	return 0;
	}
	return 1;
}
void in(){
	if(check()){
	for(int i=1;i<=N;i++){
		if(S[i]==0)	cout << '6';
		else cout << '8';
		}
		cout << endl;
	}
}
void Try(int i){
	for(int j=0;j<=1;j++){
		S[i]=j;
		if(i==N)	in();
		else Try(i+1);
	}
}
int main(){
	cin >> N;
	Try(1);
}
