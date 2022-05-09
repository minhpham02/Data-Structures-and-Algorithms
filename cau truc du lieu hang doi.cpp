#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,m;	cin >> t;
	while(t--){
		cin >> n;
		queue<int>Q;
		switch(n){
			case 1: cout << Q.size() <<< endl;
			case 2:	if(Q.empty())	cout << "YES\n";
					else cout << "NO\n";
			case 3:	int a;	cin >> a;	Q.push(a);	break;
			case 4:	if(!Q.empty())	cout << Q.pop(); break;
			case 5:	if(!Q.empty())	cout << Q.front() << endl;
					else cout << -1 << endl;
			case 6: if(!Q.empty())	cout << Q.back();
					else cout << -1 << endl;
			}
		}
	}
