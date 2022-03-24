#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n],b[n][n];
	for(int i=0;i<n;i++)	cin >> a[i];
	vector<int>tmp;
	for(int i=0;i<n;i++){
		tmp.push_back(a[i]);
		sort(tmp.begin(),tmp.end());
		for(int j=0;j<tmp.size();j++)	b[i][j]=tmp[j];
	}
	for(int i=n-1;i>=0;i--){
		cout << "Buoc " << i << ": ";
		for(int j=0;j<=i;j++){
			cout << b[i][j] << ' ';
		}
		cout << endl;
	}
}
