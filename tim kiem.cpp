#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		int a[n],kt=0;
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<n;i++){
			if(a[i]==k){
				cout << "1\n";
				kt=1;
			}
		}
	if(kt==0)	cout << "-1\n";
	}
}
