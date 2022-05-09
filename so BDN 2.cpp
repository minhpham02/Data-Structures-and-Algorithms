#include<bits/stdc++.h>
using namespace std;
void xuly(int n){
	queue<long long>Q;	long long x;
	Q.push(1);
	while(1){
		x=Q.front();	Q.pop();
		if(x%n==0){	cout << x; break;
		}else{
			Q.push(x*10);
			Q.push(x*10+1);
		}
	}
}
int main(){
	int t;	cin >> t;
	while(t--){
		int n;
		cin >> n;
		xuly(n);
		cout << endl;
	}
}

