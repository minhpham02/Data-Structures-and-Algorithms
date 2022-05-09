#include<bits/stdc++.h>
using namespace std;
int checktoantu(char c){
	if(c == '+' || c == '-' || c == '*' || c == '/' || c=='^' || c=='%')	return 1;
	return 0;
}
string tiento_hauto(string s){
	stack<string>st;
	for(int i=s.length()-1;i>=0;i--){
		if(checktoantu(s[i])){
			string tmp1=st.top();	st.pop();
			string tmp2=st.top();	st.pop();
			string tmp3=tmp1+tmp2+s[i];
			st.push(tmp3);
		}
		else	st.push(string(1,s[i]));
	}
	return st.top();
}
int main(){
	int t;	cin >> t;
	while(t--){
		string s;	cin >> s;
		cout << tiento_hauto(s) << endl;
	}
}
