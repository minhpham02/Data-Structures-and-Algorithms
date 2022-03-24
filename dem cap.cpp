#include<bits/stdc++.h>
using namespace std;
void nhap(int a[], int n){
	for(int i=0; i < n; i++) cin >> a[i];
}
int dem(int  n, int a[], int k, int b[]){
	if(n==0)
		return 0;
	if(n == 1)
		return b[0];
		
	int*idx = upper_bound(a,a+k, n);
	int ans = (a+k)-idx;
	ans += (b[0]+b[1]);
	if(n==2)
		ans -= (b[3] + b[4]);
	if(n==3)
		ans += b[2];
	return ans;
}
int xuly(int a[], int b[], int n, int k){
	int nofy[5]={0};
	for(int i=0; i < k ; i++)
		if(b[i]<5)
			nofy[b[i]]++;
	sort(b,b+k);
	
	int tol_par = 0;
	for(int i=0; i < n; i++)
		tol_par += dem(a[i], b, k, nofy);
	return tol_par;
}
main(){
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n],  b[k];
		nhap(a,n);
		nhap(b,k);
		cout << xuly(a,b,n,k) << endl;
	}
}
