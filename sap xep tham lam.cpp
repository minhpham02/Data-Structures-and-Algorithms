#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,OK=1;
		cin >> n;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b,b+n);
		for(int i=0;i<n;i++){
			if(a[i] != b[i] && a[i] != b[n-i-1]){
				cout << "No\n";	OK=0; break;
			}
		}
		if(OK==1)	cout << "Yes\n";
	}
}
