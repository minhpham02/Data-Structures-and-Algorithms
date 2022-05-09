#include<bits/stdc++.h>
using namespace std;
void xuly(long long n){
	queue<long long>Q;	long long x;
	int d=0;
	Q.push(1);
	while(1){
		x=Q.front();	Q.pop();
		if(x<=n) d++;
		else break;
		Q.push(x*10);
		Q.push(x*10+1);
	}
		cout << d;
}
int main(){
	int t;	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		xuly(n);
		cout << endl;
	}
}

