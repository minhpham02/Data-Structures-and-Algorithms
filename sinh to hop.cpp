#include<bits/stdc++.h>
using namespace std;
int A[20],n,k;
void in(){
	for(int i=1;i<=k;i++)	cout << A[i];
	cout << ' ';
}
void Try(int i){
	for(int j=A[i-1]+1;j<=n-k+i;j++){
		A[i]=j;
		if(i==k)	in();
		else Try(i+1);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		Try(1);
		cout << endl;
	}
}
