#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k,m;
		cin >> n >> m >> k;
		int a[n+m],result;
		for(int i=0;i<n+m;i++)	cin >> a[i];
		sort(a,a+n+m);
		cout << a[k-1] << endl;
	}
}