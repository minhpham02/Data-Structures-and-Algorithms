#include<bits/stdc++.h>
using namespace std;
int A[20],n;
void in(){
	for(int i=1;i<=n;i++){
		int res=A[i-1]^A[i];
		cout << res;
	}
	cout << ' ';
}
void Try(int i){
	for(int j=0;j<=1;j++){
		A[i]=j;
		if(i==n)	in();
		else 	Try(i+1);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		Try(1);
		cout << endl;
	}
}
