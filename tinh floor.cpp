#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,x;
	cin >> t;
	while(t--){
		cin >> n >> x;
		long long a[n],res=-1;
		for(int i=1;i<=n;i++){
			cin >> a[i];
			if(a[i]<=x)	res=i;
		}
		cout << res << endl;
	}
}
