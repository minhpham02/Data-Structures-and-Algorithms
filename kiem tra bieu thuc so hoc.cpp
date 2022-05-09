#include<bits/stdc++.h>
using namespace std;
int kt(string s){
	stack<char>st;
	for(int i=0;i<s.length();i++){
		if(s[i]!=')')	st.push(s[i]);
		else{
			int check=0;
			while(!st.empty()){
				char c=st.top(); st.pop();
				if(c=='(')	break;
				if(c=='+' || c=='-' || c=='*' || c=='/')	check=1;
			}
			if(check==0)	return 1;
		}
	}
	return 0; 
}
int main(){
	int t;	cin >> t;
	string s;
	while(t--){
		cin.ignore();
		getline(cin,s);
		if(kt(s))	cout << "Yes\n";
		else cout << "No\n";
	}
}
