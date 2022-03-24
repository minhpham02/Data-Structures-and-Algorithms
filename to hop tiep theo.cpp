#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		int A[n],m=0,B[n];
		for(int i=1;i<=k;i++){
			cin >> A[i];	B[i]=A[i];
		}
		int i=k;
		while(A[i]==n-k+i && i>0)	i--;
		if(i==0)	cout << k << endl;
		else{
			A[i]++;
			for(int j=i+1;j<=k;j++)	A[j]=A[j-1]+1;
			for(int i=1;i<=k;i++){
				for(int j=1;j<=k;j++){
					if(A[i]==B[j])	m++;
			}
		}
		cout << k-m << endl;
		}
	}
}
