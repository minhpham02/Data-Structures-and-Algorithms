#include<bits/stdc++.h>
using namespace std;
long long n,k;
void xuly(){
	long long a[n];
	map<long long,long long> s;
	for(int i=0; i< n; i++){
		cin >> a[i];
		s[a[i]]++;
	}
	long long dem =0;
	for(int i=0; i< n; i++){
		if(a[i]*2==k){
			dem += (s[a[i]]*(s[a[i]]-1))/2;
			s[a[i]]=0;
		}
		else{
			dem += s[a[i]]*s[k-a[i]];
			s[a[i]]=0;
			s[k-a[i]]=0;
		}
	}
	cout << dem << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		xuly();
	}
		
}
