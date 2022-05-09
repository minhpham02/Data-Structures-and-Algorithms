#include<bits/stdc++.h>
using namespace std;
void xuly(int n){
	queue<string>Q;	string x;
	Q.push("1");
	while(n--){
		x=Q.front();	Q.pop();
		cout << x << " ";
		Q.push(x+"0");
		Q.push(x+"1");
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
