#include<bits/stdc++.h>
using namespace std;
int Q,n;
string s;
stack<int>res;
void show(){
	if(res.size()!=0)	cout << res.top() << endl;
	else cout << "NONE\n";	
}
int main(){
	cin >> Q;
	while(Q--){
		cin >> s;
		if(s=="PUSH"){
			cin >> n;	res.push(n);
		}
		else if(s=="POP"){ if(res.size()!=0) res.pop();}
		else show();
	}
}

