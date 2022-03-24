#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,d=1;
	cin >> n;
	int a[n],count=0,b[n]={0};
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int i=1;i<=n;i++){
		b[a[i]]=b[a[i]-1]+1;
		count =max(count,b[a[i]]);
	}
 	cout << n-count;
}
