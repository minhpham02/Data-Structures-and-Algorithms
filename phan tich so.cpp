#include<bits/stdc++.h>
using namespace std;
int N,A[50],OK=0,K;
void in(){
	cout << "(";
	for(int i=1;i<K;i++){
		cout << A[i] << ' ';
	}
	cout << A[K] << ") ";	
}
void Sinh(){
	int i=K;
	while(A[i]==1)	i--;
	if(i==0)	OK=1;
	else{
		A[i]--;
		int x = K-i+1 , y = x/A[i], z = x%A[i];
		K=i;
		if(y>0){
			for(int j=i+1;j<=i+y;j++)	A[j]=A[i];
			K = K + y;
		}
		if(z>0){
			K++;	A[K]=z;
		}
	}
}
int main(){
	int t;	cin >> t;
	while(t--){
		cin >> N;	K=1;
		A[1]=N;
		while(!OK){
			in();
			Sinh();
		}
		OK=0;
		cout << endl;
	}
}
