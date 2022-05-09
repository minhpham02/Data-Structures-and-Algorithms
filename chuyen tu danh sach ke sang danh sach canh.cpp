#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[50][50],j;	string s;
	cin >> n;
	memset(a,0,sizeof(a));
	for(int i=1;i<=n;i++){
		cin.ignore();
		getline(cin,s);
		istringstream s_cin(s);
		while(s_cin >> j) a[i][j]=1;
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i][j]==1)	cout << i << ' ' << j << endl;
		}
	}
}
