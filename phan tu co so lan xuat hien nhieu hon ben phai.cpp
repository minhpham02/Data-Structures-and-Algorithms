#include<bits/stdc++.h>
using namespace std;
void xuly(int a[],int f[],int n){
	stack<int>st;	int B[n];
	for(int i=n-1;i>=0;i++){
		while(!st.empty() && f[a[i]]>=f[a[st.top()]])	st.pop();
		if(st.empty())	B[i]=-1;
		else B[i]=st.top();
		st.push(i);
	}
	for(int i=0;i<n;i++){
		if(B[i]!=-1)	cout << a[B[i]] << " ";
		else cout << -1 << " ";
	}
	cout << endl;
}
int main(){
	int t,n;	cin >> t;
	while(t--){
		cin >> n;	int a[n],f[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
			f[a[i]]++;
		}
		xuly(a,f,n);
	}
}
