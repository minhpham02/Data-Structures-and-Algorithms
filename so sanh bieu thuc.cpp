#include<bits/stdc++.h>
using namespace std;
string xuly(string s){
	stack<char>st;
	for(int i=0;i<s.length();i++){
		if(s[i]=='('){
			char c=s[i-1];
			if(c=='-' || c=='+')	st.push(c);
		}if(!st.empty() && st.top() == '-'){
			if(s[i] == '-')	s[i]='+';
			else if(s[i] == '+')	s[i]='-';
		}if(s[i]==')' && !st.empty())	st.pop();	
	}
	string str="";
	for(int i=0;i<s.length();i++){
		if(s[i]!='(' && s[i]!=')')	str += s[i];
	}
	return str;
}
int main(){
	int t;	cin >> t;
	while(t--){
		cin.ignore();
		string s1,s2;
		cin >> s1 >> s2;
		if(xuly(s1)==xuly(s2))	cout << "YES\n";
		else cout << "NO\n";
	}
}
