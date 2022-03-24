#include<bits/stdc++.h>
using namespace std;
vector<int>A(11);
int n;
vector<vector< int > >B; 
void out(){
	for(int i=B.size()-1;i>=0;i--){
		cout << '[';
		for(int j=0;j<B[i].size()-1;j++) cout << B[i][j] << ' ';	
			cout << B[i].back() << ']' <<' ';
	}
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		A.resize(n);
		B.clear();
		for(int i=0;i<A.size();i++)	cin >> A[i];
			B.push_back(A);
		while(A.size()>1){
			for(int i=0;i<A.size()-1;i++)	A[i]=A[i]+A[i+1];
				A.pop_back();
				B.push_back(A);
		}
		out();
	}
}
