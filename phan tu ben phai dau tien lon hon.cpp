#include<bits/stdc++.h>
using namespace std;
void xuly(int a[],int n){
	stack<int>st;	int R[100000];
	for(int i=n-1;i>=0;i--){
		while(!st.empty() && a[i]>=st.top())	st.pop();
		if(st.empty())	R[i]=-1;
		else	R[i]=st.top();
		st.push(a[i]);
	}
	for(int i=0;i<n;i++)	cout << R[i] << " ";
	cout << endl;
}
int main(){
	int t,n;	cin >> t;
	while(t--){
		cin >> n;
		int a[100000];
		for(int i=0;i<n;i++)	cin >> a[i];
		xuly(a,n);
	}
}
