#include<bits/stdc++.h>
using namespace std;
int A[11],B[11],N,K,sum,d=0;
vector<vector<int > >tmp;
void in(int h){
	vector<int>res;
	for(int i=1;i<h;i++){
		res.push_back(B[i]);
	}
	tmp.push_back(res);
}
void Try(int i,int sum,int k){
	if(sum==K)	in(i);
	for(int j=k;j<=N;j++){
		sum += A[j];
		B[i]=A[j];
		if(sum<=K)	Try(i+1,sum,j+1);
		sum -= A[j];
	}
}
int main(){
	cin >> N >> K;
	for(int i=1;i<=N;i++)	cin >> A[i];
	Try(1,0,1);
	for(int i=tmp.size()-1;i>=0;i--){
		for(int j=0;j<tmp[i].size();j++){
			cout << tmp[i][j] << ' ';
		}
		cout << endl;
	}
	cout << tmp.size() << endl;
}
