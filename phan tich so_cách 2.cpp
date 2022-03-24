#include<bits/stdc++.h>
using namespace std;
int A[50],N;
void in(int m){
	int i;
	cout << "(";
	for(int i=1;i<m;i++)	cout << A[i] << " ";
	cout << A[m] << ") ";
}
void Try(int x,int i,int s){
	for(int j=x;j>=1;j--){
		A[i]=j;
		if(j==s)	in(i);
		else if(j<s)	Try(j,i+1,s-j);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> N;
		Try(N,1,N);
		cout << endl;
	}
}
