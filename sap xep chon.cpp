#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)	cin >> a[i];
	for(int i=0;i<n-1;i++){
		int tmp=a[i],k=i;
		for(int j=i+1;j<n;j++){
			if(tmp>a[j]){
				tmp=a[j];
				k=j;
			}
		}
		swap(a[k],a[i]);
		cout << "Buoc " << i+1 << ": ";
		for(int i=0;i<n;i++) cout << a[i] << " ";
		cout << endl;
	}
}
