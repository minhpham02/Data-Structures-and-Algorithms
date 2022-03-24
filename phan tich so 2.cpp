#include<bits/stdc++.h>
using namespace std;
int N,A[50];
vector<vector<int> >tmp;
void in(int i){
	vector<int>res;
	for(int j=1;j<=i;j++){
		res.push_back(A[j]);
	}
	tmp.push_back(res);
}
void Try(int x,int i,int s){
	int j;
	for(j=x;j>=1;j--){
		A[i]=j;
		if(j==s){
			in(i);
		}
		else if(j<s) Try(j,i+1,s-j);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> N;
		tmp.clear();	
		Try(N,1,N);
		cout << tmp.size() << endl;
		for(int i=0;i<tmp.size();i++){
			cout << "(";
			for(int j=0;j<tmp[i].size()-1;j++){
				cout << tmp[i][j] << " ";
			}
			cout << tmp[i][tmp[i].size()-1] << ") ";
		}
		cout << endl;
	}
}
