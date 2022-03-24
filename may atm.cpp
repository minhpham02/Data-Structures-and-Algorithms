#include<bits/stdc++.h>
using namespace std;
int N,A[35],S,kq=1000;
void Try(int i,int sum,int x){
	if(sum>S || x>kq)	return;
	if(i==N){
		if(sum==S)	kq=min(kq,x);
		return;
	}
	Try(i+1,sum,x);
	Try(i+1,sum+A[i],x+1);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> N >> S;
		for(int i=0;i<N;i++)	cin >> A[i];
		Try(0,0,0);
		if(kq==1000)	cout << -1;
		else cout << kq;
		kq=1000;
		cout << endl;
	}
}

