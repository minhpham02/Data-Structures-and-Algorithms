#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s="",tmp="";
		for(int i=0;i<n;i++){
			cin >> s;
			tmp+=s;
		}
		sort(tmp.begin(),tmp.end());
		for(int i=0;i<tmp.length();i++){
			if(tmp[i]!=tmp[i+1])	cout << tmp[i] << ' '; 
		}
		cout << endl;
	}
}
