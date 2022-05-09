#include<bits/stdc++.h>
using namespace std;
int check(string s){
	stack<char>res; char a;
	for(int i=0;i<s.length();i++){
		if(s[i]=='(' || s[i]=='[' || s[i]=='{')	res.push(s[i]);
		else{
			if(!res.empty() && s[i]==')' && res.top()=='(')	res.pop();
			else if(!res.empty() && s[i]==']' && res.top()=='[')	res.pop();
			else if(!res.empty() && s[i]=='}' && res.top()=='{')	res.pop();
			else return 0;
		}	
	}
	return 1;
}
int main(){
	string s;
	int t;	cin >> t;
	while(t--){
		cin >> s;
		if(check(s))	cout << "YES\n";
		else cout << "NO\n";
	}
}
