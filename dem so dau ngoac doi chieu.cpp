#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;	cin >> t;
	string s;
	while(t--){
		cin >> s;
		stack<char>st;
		int ans=0;
		if(s[0]==')')	ans++;	s[0]='(';
		if(s[s.size()-1]=='(')	ans++;	s[s.size()-1]=')';
		for(int i=0;i<s.length();i++){
			if(s[i]=='(')	st.push(s[i]);
			else{
				if(!st.empty() && st.top()=='(')	st.pop();
				else if(st.empty())	ans++,st.push('(');	
			}
		}
		if(!st.empty())	ans += st.size()/2;
		cout << ans << endl;
	}
}
