#include<bits/stdc++.h>
using namespace std;
int n;
string s;
stack<int>a;
void show(){
	stack<int>b=a;
	vector<int>res;
	while(!b.empty()){
		res.push_back(b.top());
		b.pop();
	}
	for(int i=res.size()-1;i>=0;i--)	cout << res[i] << " ";
	cout << endl;
}
int main(){
	while(1){
		cin >> s;
		if(s == "push"){
			cin >> n;	a.push(n);
		}else if(s == "show")	show();
		else if(s=="pop")	a.pop();
		if(a.size()==0){
			cout << "empty"; break;
		}
	}
}
