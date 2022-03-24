#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)	cin >> a[i];
	vector<int>u;
	vector<int>v;
	for(int i=0;i<n;i++){
		if(i%2==0)	u.push_back(a[i]);
		else v.push_back(a[i]);
	}
	sort(u.begin(),u.end());
	sort(v.begin(),v.end(),greater<int>());
	if(u.size()<v.size()){
		for(int i=0;i<u.size();i++){
			cout << u[i] << " " << v[i] << " ";
		}
		cout << v[v.size()-1] << endl;
	}else if(u.size()>v.size()){
		for(int i=0;i<v.size();i++){
			cout << u[i] << " " << v[i] << " ";
		}
		cout << u[u.size()-1] << endl;
	}else{
		for(int i=0;i<u.size();i++){
			cout << u[i] << ' ' << v[i] << ' ';
		}
		cout << endl;
	}
}
