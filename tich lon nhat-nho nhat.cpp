#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n],b[m];
		nhap(a,n);
		nhap(b,m);
		sort(a,a+n);
		sort(b,b+m);
		cout << (long long)a[n-1]*b[0] << endl;
	}
}
