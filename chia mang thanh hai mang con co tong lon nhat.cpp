#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n],s=0;
		for(int i=0;i<n;i++)	cin >> a[i];
		sort(a,a+n);
		for(int i=0;i<n;i++){
			if(n-k>k){
				if(i<k) s = s - a[i];
				else s = s + a[i];
			}else{
				if(i<n-k) s = s - a[i];
				else s = s + a[i];
			}
		}
		cout << s << endl;
	}
}
