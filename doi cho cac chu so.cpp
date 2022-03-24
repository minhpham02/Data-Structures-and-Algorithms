#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,k;
	string s;
	cin >> t;
	while(t--){
		cin >> k >> s;
		for(int i=0;i<k && i<s.length();i++){
			int max=i,j=s.length();
			while(j-->i){
				if(s[max]<s[j]){
				max=j;
				}
			}
				if(max!=i)	swap(s[max],s[i]);
				else k++;
			}
		cout << s << endl;
	}
}
