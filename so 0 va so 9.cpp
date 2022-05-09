#include<bits/stdc++.h>
using namespace std;
int chuyen(string n){
	int m=0;
	for(int i=0;i<n.length();i++){
		m = m*10+n[i]-'0';
	}
	return m;
}
void xuly(int n){
	queue<string>Q;	string x;
	Q.push("9");
	while(1){
		x=Q.front();	Q.pop();
		if(chuyen(x)%n==0){	cout << x;	break;}
		else{
			Q.push(x+"0");
			Q.push(x+"9");
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
