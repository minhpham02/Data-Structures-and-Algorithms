#include<bits/stdc++.h>
using namespace std;
int checktoantu(char c){
	if(c == '+' || c == '-' || c == '*' || c == '/' || c=='^' || c=='%')	return 1;
	return 0;
}
string hauto_tiento(string s){
	stack<string>st;
	for(int i=0;i<s.length();i++){
		if(checktoantu(s[i])){
			string tmp1=st.top();	st.pop();
			string tmp2=st.top();	st.pop();
			string tmp3=s[i]+tmp2+tmp1;
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
		cout << hauto_tiento(s) << endl;
	}
}
