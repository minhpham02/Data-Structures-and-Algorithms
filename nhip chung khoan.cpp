#include<bits/stdc++.h>
using namespace std;
void xuly(int a[],int n){
	stack<int>st;	int B[n];
	for(int i=1;i<=n;i++){
		while(!st.empty() && a[i] >= a[st.top()])	st.pop();
		if(st.empty())	B[i]=0;
		else B[i]=st.top();
		st.push(i);
	}
	for(int i=1;i<=n;i++)	cout << i-B[i] << " ";
	cout << endl;
}
int main(){
	int t,n;	cin >> t;
	while(t--){
		cin >> n;	int a[n];
		for(int i=1;i<=n;i++)	cin >> a[i];
		xuly(a,n);
	}
}
