#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		sort(a,a+n);
		if(a[0]!=a[1])	cout << a[0] << " " << a[1] << endl;
		else cout << "-1\n";	
	}
}
