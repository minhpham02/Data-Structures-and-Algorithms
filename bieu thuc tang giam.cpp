#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	string s;
	while(t--){
		cin >> s;
		s = ' '+s;
		stack<int>res;
		for(int i=1;i<=s.length();i++){
			if(s[i]=='D')	res.push(i);
			else{
				cout << i;
				while(!res.empty()){
					cout << res.top();
					res.pop();
				}
			}
		}
		cout << endl;
	}
} 
