#include<bits/stdc++.h>
using namespace std;
int qhd(int a[],int n){
	int i,j,F[1005],kq=0;
	for(i=0;i<n;i++){
		F[i]=1;
		for(j=0;j<i;j++){
			if(a[j]<=a[i]){
			F[i]=max(F[i],F[j]+1);
			}
		}
		kq=max(kq,F[i]);
	}
	return n-kq;
}
int main(){
	int t,n,a[1005];
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=0;i<n;i++)	cin >> a[i];
		cout << qhd(a,n) << endl;
	}
}
