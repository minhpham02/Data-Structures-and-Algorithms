#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > res;
int x,n,A[25],B[25];
void in(int i){
	vector<int>tmp;
	for(int j=1;j<=i;j++){
		tmp.push_back(B[j]);
	}
	res.push_back(tmp);
}
void Try(int i,int sum){
	for(int j=1;j<=n;j++){
		if(A[j]>=B[i-1] && sum+A[j]<=x){
			B[i]=A[j];
			if(sum+A[j]==x){
				in(i);
			}else Try(i+1,sum+A[j]);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> x;
		for(int i=1;i<=n;i++)	cin >> A[i];
		B[0]=0; res.clear();
		Try(1,0);
		if(res.size()==0)	cout << -1 << endl;
		else{
			cout << res.size() << " ";
			for(int i=0;i<res.size();i++){
				cout << "{";
				for(int j=0;j<res[i].size()-1;j++){
					cout << res[i][j] << " ";
				}
				cout << res[i][res[i].size()-1] << "} ";
			}
		}
		cout << endl;
	}
}
