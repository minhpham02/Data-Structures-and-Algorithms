#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n],b[n][n],k=0;
		for(int i=0;i<n;i++)	cin >> a[i];
		for(int i=0;i<n-1;i++){
			int kt=0;
			for(int j=1;j<n;j++){
				if(a[j-1]>a[j]){
					swap(a[j-1],a[j]);
					kt=1;
				}
			}
			if(kt==1){
				k++;
				for(int j=0;j<n;j++){
					b[i][j]=a[j];
				}
			}
		}
		for(int i=k-1;i>=0;i--){
			cout << "Buoc " << i+1 << ": ";
			for(int j=0;j<n;j++){
				cout << b[i][j] << ' ';
				}
				cout << endl;
		}
	}
}
