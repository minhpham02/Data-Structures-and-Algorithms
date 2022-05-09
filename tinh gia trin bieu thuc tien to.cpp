#include<bits/stdc++.h>
using namespace std;
int tinh(int x,int y,char c){
	if(c=='+')	return x+y;
	if(c=='-')	return x-y;
	if(c=='*')	return x*y;
	if(c=='/')	return x/y;
	if(c=='%')	return x%y;
}
int caculator_postfix(string s){
	stack<int>st;	int n;
	n=s.length();
	for(int i=s.length()-1;i>=0;i--){
		if(isdigit(s[i])){
			st.push(s[i]-'0');
		}else{
			int x1=st.top();	st.pop();
			int x2=st.top();	st.pop();
			int x=tinh(x1,x2,s[i]);
			st.push(x);
		}
	}
	return st.top();
}
int main(){
	int t;	cin >> t;
	while(t--){
		string s;	cin >> s;
		cout << caculator_postfix(s) << endl;
	}
}
