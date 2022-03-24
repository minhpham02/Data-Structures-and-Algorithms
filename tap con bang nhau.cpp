#include<bits/stdc++.h>
using namespace std;
int N,A[101],sum,OK;
void Try(int i,int S){
	if(S==sum){
		OK=1;	return;
	}
	if(OK==1)	return;
	for(int j=i;j<=N;j++){
		if(S+A[j]<=sum)	Try(i+1,S+A[j]);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> N;
		OK=0; sum=0;
		for(int i=1;i<=N;i++){
			cin >> A[i];
			sum += A[i];
		}
		if(sum%2!=0)	cout << "NO\n";
		else{
			sum = sum / 2;
			Try(1,0);
			if(OK==1)	cout << "YES\n";
			else cout << "NO\n";
		}
	}
}
