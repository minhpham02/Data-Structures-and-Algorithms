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
		int a[n],b[m],c[n+m],k=0;
		nhap(a,n);
		nhap(b,m);
		for(int i=0;i<n;i++){
			c[k++]=a[i];
		}
		for(int i=0;i<n;i++){
			c[k++]=b[i];
		}
		sort(c,c+k);
		for(int i=0;i<k;i++)
			cout << c[i] << " ";
			cout << endl;
		}
}
