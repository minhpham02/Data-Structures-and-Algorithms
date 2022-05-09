#include<bits/stdc++.h>
using namespace std;
void show(queue<int>q){
	if(!q.empty())	cout << q.front() << endl;
	else cout << "NONE\n";
}
int main(){
	int t;	cin >> t;
	queue<int>q;
	while(t--){
		string s;	cin >> s;
		if(s=="PUSH"){
			int  n; cin >> n;
			q.push(n);
		}else if(s=="POP")	q.pop();
		else show(q);
	}
}
