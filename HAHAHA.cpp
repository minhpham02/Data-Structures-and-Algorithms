#include<bits/stdc++.h>
using namespace std;
int A[20],n;
int check(){
	if(A[1]==0 || A[n]==1)	return 0;
	for(int i=1;i<n;i++){
		 if(A[i+1] && A[i])	return 0;
	}
	return 1;
}
void in(){
	if(check()){
		for(int i=1;i<=n;i++){
			if(A[i]==0)	cout << 'A';
			else cout << 'H';
		}
	}
	cout << endl;
}
void Try(int i){
	for(int j=0;j<=1;j++){
		A[i]=j;
		if(i==n)	in();
		else Try(i+1);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		Try(1);
	}
}
