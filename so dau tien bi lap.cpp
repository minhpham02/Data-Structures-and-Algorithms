#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		for(int i=0;i<n;i++)	cin >> a[i];
		for(int i=0;i<n;i++){
			if(i==n-1)	cout << "NO\n";
			int count = 0;
			for(int j=i+1;j<n;j++){
				if(a[i]==a[j])	count++;
			}
			if(count>0){
				cout << a[i] << endl;
				break;
			}
		}
	}
}
