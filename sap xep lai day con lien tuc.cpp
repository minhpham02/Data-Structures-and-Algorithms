#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n],b[n]={0},c[n]={0},k=0;
		for(int i=0;i<n;i++){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;i++){
			if(a[i]!=b[i])		c[k++]=i+1;
		}
		cout << c[0] << ' ' << c[k-1] << endl;
	}
}
