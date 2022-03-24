#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n-1;j++){
			if(abs(a[j]-x)>abs(a[j+1]-x))	swap(a[j],a[j+1]);
			}
		}
		for(int i=0;i<n;i++)
			cout << a[i] << " ";
			cout << endl;
	}
}
