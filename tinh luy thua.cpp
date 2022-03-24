#include<bits/stdc++.h>
using namespace std;
int M = 1e9+7;
long long powMod(int a,long long b){
	if(b==0)	return 1;
	long long X = powMod(a,b/2);
	if(b%2==0)	return X*X%M;
	return a*(X*X%M)%M;
} 
int main(){
	int a;
	long long b;
	while(cin >> a >> b){
		if(a==0 && b==0)	break;
		cout << powMod(a,b) << endl;
	}
}
