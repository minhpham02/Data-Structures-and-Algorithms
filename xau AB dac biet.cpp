#include<bits/stdc++.h>
using namespace std;
int n,k;
string A;
vector<string>tmp;
void in(){
	int check=0;
	for(int i=0;i<n-k+1;i++){
		int d=0;
		for(int j=i;j<i+k;j++){
			if(A[j]=='A')	d++;
		}
		if(d==k)	check++;
	}
	if(check==1)		tmp.push_back(A);
}
void Try(int i){
	for(int j=0;j<=1;j++){
		A[i]=j+'A';
		if(i==n-1) in();
		else Try(i+1);
	}
}
int main(){
	cin >> n >> k;
	A.resize(n);
	tmp.clear();
	Try(0);
	cout << tmp.size() << endl;
	for(int i=0;i<tmp.size();i++)	cout << tmp[i] << endl;
}
