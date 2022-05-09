#include<bits/stdc++.h>
using namespace std;
void nextgreater(int a[],int n,int G[]){
	stack<int>st;
	for(int i=n-1;i>=0;i--){
		while(!st.empty() && a[i]>=a[st.top()]) st.pop();
		if(!st.empty())	G[i]=st.top();
		else G[i]=-1;
		st.push(i);	
	}
}
void rightsmaller(int a[],int n,int S[]){
	stack<int>st;
	for(int i=n-1;i>=0;i--){
		while(!st.empty() && a[st.top()]>=a[i]) st.pop();
		if(st.empty())	S[i]=-1;
		else S[i]=st.top();
		st.push(i);
	}
}
void xuly(int a[],int n){
	int G[1000000],S[1000000];
	nextgreater(a,n,G);
	rightsmaller(a,n,S); 
	for(int i=0;i<n;i++){
		if(G[i]!=-1 && S[G[i]]!=-1)	
			cout << a[S[G[i]]] << " ";
		else cout << -1 << " ";
	}
	cout << endl;
}
int main(){
	int t,n;	cin >> t;
	while(t--){ 
		cin >> n;	int a[n];
		for(int i=0;i<n;i++)	cin >> a[i];
		xuly(a,n);
	}
}
