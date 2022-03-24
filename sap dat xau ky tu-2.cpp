#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,D;
	cin >> t;
	while(t--){
		cin >> D;
		string s;
		cin >> s;
		int f[26];
		memset(f,0,sizeof(f));
		for(int i=0;i<s.length();i++){
			f[s[i]-'A']++;
		}
		sort(f,f+26,greater<int>());
		if(D*(f[0]-1)+1<=s.length())	cout << 1 << endl;
		else cout << -1 << endl;
	}
}
