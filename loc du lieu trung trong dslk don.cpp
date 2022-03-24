#include<bits/stdc++.h>
using namespace std;
vector<int>tmp;
int main(){
	int n;
	cin >> n;
	int f[100000],a[n];
	memset(f,0,sizeof(f));
	for(int i=0;i<n;i++){
		cin >> a[i];
		tmp.push_back(a[i]);
		f[a[i]]++;
	}
	for(int i=0;i<tmp.size();i++){
		if(f[tmp[i]]>0){
			cout << tmp[i] << " ";
			f[tmp[i]]=0;
		}
	}
}
		
	

