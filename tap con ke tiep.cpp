#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		int A[n];
		for(int i=1;i<=k;i++)	cin >> A[i];
		int i=k;
		while(A[i]==n-k+i && i>0)	i--;
		if(i==0)	for(int i=1;i<=k;i++)	A[i]=i;
		else{
			A[i]++;
			for(int j=i+1;j<=k;j++)	A[j]=A[j-1]+1;
		}
		for(int i=1;i<=k;i++)	cout << A[i] << ' ';
		cout << endl;
	}
}
