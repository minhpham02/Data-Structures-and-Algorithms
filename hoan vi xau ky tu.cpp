#include<bits/stdc++.h>
using namespace std;
string s;	bool B[20];
void in(){
	for(int i=1;i<=s.length();i++)	cout << s[i];
	cout << ' ';
}
void Try(int i){
	for(int j=0;j<s.length();j++){
		if(B[j]==false){
			s[i]=j + 'A';	B[j]=true;
			if(i==s.length())	in();
			else Try(i+1);
			B[j]=false;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		scanf("\n");
		cin >> s;
		for(int i=1;i<=s.length();i++)	B[i]=false;
		Try(1);
		cout << endl;
	}
}
