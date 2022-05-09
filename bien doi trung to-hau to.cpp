#include<bits/stdc++.h>
using namespace std;
int priority(char c){
	if(c=='+' || c=='-')	return 1;
	if(c=='*' || c=='/' || c=='%')	return 2;
	if(c=='^')	return 3;
	return -1;
}
void trungto_hauto(string s){
	stack<char>st;
	string ans="";
	for(int i=0;i<s.length();i++){
		if(s[i]=='(')	st.push(s[i]);
		else if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')	ans += s[i];
		else if(s[i]==')'){
			while(!st.empty() && st.top()!='('){
				char c=st.top();
				st.pop();
				ans += c;
			}
			if(st.top()=='(')	st.pop();
		}
		else{
			while(!st.empty() && priority(s[i]) <= priority(st.top())){
				char c=st.top();
				st.pop();
				ans += c;
			}
			st.push(s[i]);
		}
	}
	while(!st.empty() && st.top()!='('){
		char c= st.top();	st.pop();
		ans += c;
	}
	cout << ans << endl;
}
int main(){
	int t;	cin >> t;
	string s;
	while(t--){
		cin >> s;
		trungto_hauto(s);
	}
}
