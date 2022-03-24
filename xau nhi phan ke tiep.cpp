#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		scanf("\n");
		string s;
		cin >> s;
		int i=s.length();
		while(i-- && s[i]=='1')	s[i]='0';
		if(i>=0)	s[i]='1';
		cout << s << endl;
	}
}
