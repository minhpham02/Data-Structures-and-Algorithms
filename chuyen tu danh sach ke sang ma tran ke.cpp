#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[1005][1005],j;	string s;	
	cin >> n;
	memset(a,0,sizeof(a));
	for(int i=1;i<=n;i++){
		scanf("\n");
		getline(cin,s);
		istringstream s_cin(s);
		while(s_cin >> j) a[i][j]=1;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
