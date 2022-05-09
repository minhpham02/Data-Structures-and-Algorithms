#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	long long F[55],n;
	F[0]=1,F[1]=1,F[2]=2;
	for(int i=3;i<=50;i++)	F[i]=F[i-1]+F[i-2]+F[i-3];
	while(t--){
		cin >> n;
		cout << F[n] << endl;
	}
}
