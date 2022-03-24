#include<bits/stdc++.h>
using namespace std;
int search(int l,int r,int a[],int k){
	int mid;
	while(l<=r){
		mid = (r+l)/2;
		if(a[mid] == k)	return mid;
		else if(k>a[mid])	return search(mid+1,r,a,k);
		return search(l,mid-1,a,k);
	}
	return -1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n],result;
		for(int i=0;i<n;i++)	cin >> a[i];
		sort(a,a+n);
		result = search(0,n-1,a,k);	
		if(result == -1)	cout << "NO\n";
		else cout << a[result+1] << endl;
	}
}
