#include<bits/stdc++.h>
using namespace std;
void xuly(int S,int T){
	int A[20005],n;
	for(int i=0;i<=20000;i++)	A[i]=INT_MAX;
	A[S]=0;
	queue<int>q; q.push(S);
	while(A[T]==INT_MAX){
		n=q.front(); q.pop();
		if(n-1>0 && A[n-1]==INT_MAX){
			A[n-1]=A[n]+1;
			q.push(n-1);
		}
		if(n*2<20000 && A[n*2]==INT_MAX){
			A[n*2]=A[n]+1;
			q.push(n*2);
		}
	}
	cout << A[T] << endl;
}
int main(){
	int t;	cin >> t;
	while(t--){
		int S,T;	cin >> S >> T;
		xuly(S,T);
	}
}
