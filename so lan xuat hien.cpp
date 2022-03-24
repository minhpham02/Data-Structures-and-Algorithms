#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		int a[n],b[n]={0};
		for(int i=0;i<n;i++){
			cin >> a[i];
			b[a[i]]++;
	}
	if(b[x]==0)	cout << "-1\n";
	else cout << b[x] << endl;
	}
}
