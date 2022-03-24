#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		long long X=0,Y=0;
		for(int i=0;i<n;i++)	cin >> a[i];
		sort(a,a+n);
		for(int i=0;i<n;i++){
			if(i%2==0)	X=X*10+a[i];
			else Y=Y*10+a[i];
		}
		cout << X+Y << endl;
	}
}
