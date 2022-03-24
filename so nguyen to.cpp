#include<bits/stdc++.h>
using namespace std;
int S,P,N;
vector<vector<int> > res;
vector<int>tmp,s;
int nto(int n){
	if(n<2)	return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)	return 0;
	}
	return 1;
}
void Try(int i,int sum,int count){
	if(sum == S && count == N){
		res.push_back(s); return;
	}
	if(sum > S || count > N)	return;
	int j;
	for(j=i;j<tmp.size();j++){
		s.push_back(tmp[j]);
		Try(j+1,sum+tmp[j],count+1);
		s.pop_back();
	}
}
int main(){
	int t,i,j;
	cin >> t;
	while(t--){
		res.clear();	tmp.clear();
		cin >> N >> P >> S;
		for(i=P+1;i<=S;i++){
			if(nto(i))	tmp.push_back(i);
		}
		Try(0,0,0);
		cout << res.size() << endl;
		for(i=0;i<res.size();i++){
			for(j=0;j<res[i].size();j++){
				cout << res[i][j] << " ";
			}
			cout << endl;
		}
	}
}
