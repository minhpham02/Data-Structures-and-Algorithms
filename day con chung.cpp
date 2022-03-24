#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin >> a[i];	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m,k;
		cin >> n >> m >> k;
		int a[n],b[m],c[k],i=0,j=0,h=0,OK=0;
		nhap(a,n);	nhap(b,m); nhap(c,k);
		while(i<n && j<m && h<k){
			if(a[i]==b[j] && b[j]==c[h]){
				cout << a[i] << ' ';
				OK=1;
				i++; j++; h++;
			}
			else if(a[i]<b[j])	i++;
			else if(b[j]<c[h])	j++;
			else h++;
		}
		if(OK==0)	cout << "NO";
		cout << endl;
	}
}
