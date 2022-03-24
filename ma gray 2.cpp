#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string S,tmp;
		cin >> S;
		tmp=S;
		for(int i=1;i<S.length();i++){
			if((tmp[i-1]-'0')^0==(S[i]-'0')) tmp[i]='0';
			else tmp[i]='1';
		}
		cout << tmp << endl;
	}
}
