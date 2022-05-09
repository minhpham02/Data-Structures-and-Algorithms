#include<bits/stdc++.h>
using namespace std;
void xuly(int n){
	queue<string>Q;	string x;
	vector<string>st;
	Q.push("6");	Q.push("8");
	while(1){
		x=Q.front();	Q.pop();
		if(x.size()<=n){
			st.push_back(x);
			Q.push(x+"6");
			Q.push(x+"8");
		}else break;
	}
	cout << st.size() << endl;
	for(int i=0;i<st.size();i++){
			cout << st[i] << " ";
		}
}
int main(){
	int t;	cin >> t;
	while(t--){
		int n;	cin >> n;
		xuly(n);
		cout << endl;
	}
}
