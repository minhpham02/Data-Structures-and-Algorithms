#include<bits/stdc++.h>
using namespace std;
int n,A[20],B[20];
vector<vector<int> > res;
void in(int k){
	int s=0;
	vector<int>tmp;
	for(int i=1;i<=k;i++) s += A[B[i]];
	if(s%2!=0){
		for(int i=1;i<=k;i++) tmp.push_back(A[B[i]]);
	}
	res.push_back(tmp);
}
void Try(int i,int k){
	for(int j=B[i-1]+1;j<=n-k+i;j++){
		B[i]=j;
		if(i==k)	in(k);
		else Try(i+1,k);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=1;i<=n;i++)	cin >> A[i];
		sort(A+1,A+n+1,greater<int>());
		for(int i=1;i<=n;i++){
			for(int j=1;j<=i;j++)	B[j]=j;
			Try(1,i);
		}
		sort(res.begin(),res.end());
		for(int i=0;i<res.size();i++){
			for(int j=0;j<res[i].size();j++){
				cout << res[i][j] << " ";
			}
			cout << endl;
		}
		res.clear();
	}
}
