#include<bits/stdc++.h>
using namespace std;
int search(int l,int r,int a[],int k){
	int mid;
	if(l == r){
		if(a[l]==k)	return 1;
		else return 0;
	}else{
		mid=(l+r)/2;
		return search(l,mid,a,k) + search(mid+1,r,a,k);
	}
}
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n],kq;
		for(int i=0;i<n;i++)	cin >> a[i];
		kq=search(0,n-1,a,0);
		cout << kq << endl;
	}
} 
