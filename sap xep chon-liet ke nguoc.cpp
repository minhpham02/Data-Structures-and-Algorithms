#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n],b[n][n];
	for(int i=0;i<n;i++)	cin >> a[i];
	for(int i=0;i<n-1;i++){
		int t=i,m=a[i];
		for(int j=i+1;j<n;j++){
			if(m>a[j]){
				m=a[j];
				t=j;
			}
		}
		swap(a[i],a[t]);
		for(int j=0;j<n;j++){
				b[i][j]=a[j];
		}
	}
			for(int i=n-2;i>=0;i--){
			cout << "Buoc " << i+1 << ": ";
			for(int j=0;j<n;j++){
				cout << b[i][j] << ' ';
			}
			cout << endl;
	}
}
