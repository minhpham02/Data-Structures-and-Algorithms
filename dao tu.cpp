#include<bits/stdc++.h>
using namespace std;
void show(stack<string>str){
	while(!str.empty()){
		cout << str.top() << ' ';
		str.pop();
	}
	cout << endl;
}
int main(){
	int t;	string s;
	cin >> t;
	while(t--){
		stack<string>str;
		while(1){
		cin >> s;
		str.push(s);
		if(getchar()=='\n') break;
		}show(str);
	}
}
