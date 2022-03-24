#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		int a[n];
		for(int i=0;i<n;i++)	cin >> a[i];
		for(int i=0;i<n-k;i++){
			int m=a[i];
			for(int j=i;j<i+k;j++){
				if(a[i]<a[j])	m=a[j];
			}
			cout << m << " ";
		}
		cout << endl;
	}
}
