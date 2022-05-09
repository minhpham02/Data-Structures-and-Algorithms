#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;	string s;
	cin >> t;
	while(t--){
		cin >> s;
		stack<int>res;	int kq=0;	
		for(int i=0;i<s.length();i++){
			if(s[i]=='(')	res.push(s[i]);
			else{
				if(!res.empty() && s[i]==')' && res.top()=='('){
					res.pop(); kq++;
				}	
			}
		}
		cout << kq*2 << endl;	
	}
}
