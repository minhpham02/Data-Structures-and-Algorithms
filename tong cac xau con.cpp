#include<bits/stdc++.h>
using namespace std;
int doi(char C){ return C-'0';
}
long long tinh(string s){
	int n=s.length(),i;
	long long F[15],kq=0;
	F[0] = doi(s[0]);
	kq=F[0];
	for(i=1;i<n;i++){
		int h=doi(s[i]);
		F[i]=F[i-1]*10+h*(i+1);
		kq=kq+F[i];
	}
	return  kq;
}
int main(){
	int t;	string s;
	cin >> t;
	while(t--){
		cin >> s;
		cout << tinh(s) << endl;
	}
}
