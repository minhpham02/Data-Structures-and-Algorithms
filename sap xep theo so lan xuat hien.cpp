#include<bits/stdc++.h>
using namespace std;
int c[100005];
int tmp(int a,int b){
	if(c[a]==c[b])	return a<b;
	else return c[a]>c[b];
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		memset(c,0,sizeof(c));
		for(int i=0;i<n;i++){
			cin >> a[i];
			c[a[i]]++;
		}
		sort(a,a+n,tmp);
		for(int i=0;i<n;i++){
			cout << a[i] << ' ';
		}
		cout << endl;
	}
} 
