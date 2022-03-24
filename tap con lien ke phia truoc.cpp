#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		int A[k+1];
		for(int i=1;i<=k;i++)	cin >> A[i];
		int i=k;
		while(A[i]==A[i-1]+1)	i--;
		if(i==1){
			for(int j=k;j>=1;j--)	A[j]=n-k+j;
		}else{
			A[i]--;
			for(int j=i+1;j<=k;j++)	A[j]=n-k+j;
		}
		for(int i=1;i<=k;i++)	cout << A[i] << ' ';
		cout << endl; 
	}
}
