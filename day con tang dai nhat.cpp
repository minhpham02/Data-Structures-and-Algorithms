#include<bits/stdc++.h>
using namespace std;
int main(){
	int F[1005],a[1005],n,kq=0;
	cin >> n;
	for(int i=0;i<n;i++)	cin >> a[i];
	for(int i=0;i<n;i++){
		F[i]=1;
		for(int j=0;j<i;j++){
			if(a[j]<a[i]){
				F[i]=max(F[i],F[j]+1);
			}
		}
		kq=max(kq,F[i]);
	}
	cout << kq << endl;
}
