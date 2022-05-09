#include<bits/stdc++.h>
using namespace std;
void qhd(int a[],int n){
	int s=0,e=0;
	for(int i=0;i<n;i++){
		e=max(a[i],a[i]+e);
		s=max(e,s);
	}
	cout << s << endl;
}
int main(){
	int t,a[1000],n;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=0;i<n;i++)	cin >> a[i];
		qhd(a,n);
	}
}
