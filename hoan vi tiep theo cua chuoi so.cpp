#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,k;
	cin >> t;
	while(t--){
		cin >> k;
		string S;
		cin >> S;
		int n=S.length(),i=n,j=n;
		while(S[i-1]>=S[i] && i>0)	i--;	i--;
		if(i<0)	cout << k << ' ' << "BIGGEST\n";
		else{
			while(S[j]<=S[i])	j--;
			swap(S[i],S[j]);
			sort(S.begin()+i+1,S.end());
			cout << k << ' ';
			for(int i=0;i<n;i++)	cout << S[i];
			cout << endl;
		}
	}
}
