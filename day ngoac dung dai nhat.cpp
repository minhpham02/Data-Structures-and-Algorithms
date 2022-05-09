#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;	cin >> t;
	string s;
	while(t--){
		cin >> s;	int kq=0;
		stack<int>res;
		res.push(-1);
		for(int i=0;i<s.length();i++){
			if(s[i]=='(')	res.push(i);
			else{
				res.pop();
				if(!res.empty())	kq=max(kq,i-res.top());
				else res.push(i);
			}
		}
		cout << kq << endl;
	}
}
