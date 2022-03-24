#include<bits/stdc++.h>
using namespace std;
int n, k;
void xuly(){
	vector<vector<string> > s;
	cin >> n >> k; 
	int i, j, a[n], t=0; string x;
	for(i=0; i<n; i++){
		cin >> x; int d=0;
		vector<string> X;
		X.push_back(x);
		for(j=0; j<i; j++){
			if(s[j]==X){
				d=1;
				break;
			}
		}
		if(d==0) s.push_back(X);
	}
	sort(s.begin(), s.end());
	n=s.size();
	for(i=1; i<=k; i++) a[i]=i;
	while(1){
		for(i=1; i<=k; i++){
			for(j=0; j<s[a[i]-1].size(); j++) cout << s[a[i]-1][j];
			cout << ' ';
		}
		cout << endl;
		i=k;
		while(i>0 && a[i]>=n-k+i) i--;
		if(i==0) return;
		a[i]=a[i]+1;
		for(j=i+1; j<=k; j++) a[j]=a[i]+j-i;
	}
}
main(){
	xuly();
}
