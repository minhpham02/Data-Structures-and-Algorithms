#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int A[k+1],B[k+1];
		for(int i=1;i<=k;i++){
			cin >> A[i];
			B[i]=A[i];
		}
		int i=k;
		while(A[i]==n-k+i && i>0)	i--;
		if(i==0)	cout << k << endl;
		else{
			int count = 0;
			A[i]++;
			for(int j=i+1;j<=k;j++)	A[j]=A[j-1]+1;
			for(int i=1;i<=k;i++){
				for(int j=1;j<=k;j++){
					if(A[i]==B[j])	count++;
				}
			}
			cout << k-count << endl;
		}
		
	}
}
