#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;	cin >> t;
	while(t--){
		int n;	cin >> n;
		queue<int>Q;
		while(n--){
			int m;	cin >> m;
		switch(m){
			case 1: cout << Q.size() << endl; break;
			case 2:	if(!Q.empty())	cout << "YES\n";
					else cout << "NO\n";	break;
			case 3:	int a;	cin >> a;	Q.push(a);	break;
			case 4:	if(!Q.empty())	Q.pop(); break;
			case 5:	if(!Q.empty())	cout << Q.front() << endl;
					else cout << -1 << endl; break;
			case 6: if(!Q.empty())	cout << Q.back() << endl;
					else cout << -1 << endl; break;
			}
		}
	}
}
