#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)	cin >> a[i];
	vector<int>tmp;
	for(int i=0;i<n;i++){
		cout << "Buoc " << i << ": ";
		tmp.push_back(a[i]);
		sort(tmp.begin(),tmp.end());
		for(int i=0;i<tmp.size();i++)	cout << tmp[i] << ' ';
		cout << endl;
	}
}
