#include<bits/stdc++.h>
using namespace std;
bool check(int a[],int n){
	sort(a,a+n);
	for(int i=n-1;i>=2;i--){
		int l=0;
		int r=i-1;
		while(l<r){
			if(a[l]+a[r]==a[i])	return true;
			(a[l]+a[r]<a[i])?	l++: r--;
		}
	}
	return false;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++)	cin >> a[i];
		for(int i=0;i<n;i++)	a[i]=a[i]*a[i];
		if(check(a,n))	cout << "YES\n";
		else cout << "NO\n";
	}
}
