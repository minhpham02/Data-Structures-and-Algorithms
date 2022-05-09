#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;	cin >> t;
	deque<int>DQ;
	while(t--){
		string s;	cin >> s;
		if(s=="PUSHBACK"){
			int n; cin >> n;
			DQ.push_back(n);
		}else if(s=="PUSHFRONT"){
			int m; cin >> m;
			DQ.push_front(m);
		}else if(s=="POPFRONT"){
			if(!DQ.empty())	DQ.pop_front();
		}else if(s=="POPBACK"){
			if(!DQ.empty())	DQ.pop_back();
		}else if(s=="PRINTFRONT"){
			if(!DQ.empty())	cout << DQ.front() << endl;
			else cout << "NONE\n";
		}else if(s=="PRINTBACK"){
			if(!DQ.empty())	cout << DQ.back() << endl;
			else cout << "NONE\n";
		}
	}
}
