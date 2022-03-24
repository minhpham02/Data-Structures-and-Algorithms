#include<bits/stdc++.h>
using namespace std;
int A[20],n,k;
void in(){
	int d=0;
	for(int i=1;i<=n;i++){
		if(A[i]==1)	d++;
	}
	for(int i=1;i<=n;i++){
		if(d==k)	cout << A[i];
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
		cin >> n >> k;
		Try(1);
	}
}
