#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;	cin >> n;
		int A[n+1],i=n,j=n;
		for(int i=1;i<=n;i++)	cin >> A[i];
		while(A[i]<A[i-1] && i>0)	i--;
		i--;
		if(i<0)	for(int i=1;i<=n;i++)	cout << i << ' ';
		else{
			while(A[j]<A[i])	j--;
			swap(A[i],A[j]);
			sort(A+i+1,A+j+1);
			for(int i=1;i<=n;i++)	cout << A[i] << ' ';
		}
		cout << endl;
	}
}
