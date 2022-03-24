#include<bits/stdc++.h>

using namespace std;

int n,s,m,N;
void solve(){
	N=s*m;
	int tmp=0;
	for(int i=1;i<=s;i++){
		if(i%7==0)	continue;
		else{
			tmp++;
			if(tmp*n>=N){	cout << tmp << endl;
			return;
			}
		}
	}
	cout << -1 << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> s >> m;
		solve();
	}
}
