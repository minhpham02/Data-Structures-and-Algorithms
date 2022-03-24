#include<bits/stdc++.h>
using namespace std;
int const N=1e6+5;
int check[N];
void kt(){
	int n;	cin >> n;
	for(int i=2;i<n;i++){
			if(check[i]==0 && check[n-i]==0){
				cout << i << " " << n-i << endl;
			return ;
			}
		}
		cout << "-1" << endl;
}
int main(){
	int t;
	cin >> t;
	check[0]=1,check[0]=1;
		for(int i=2;i*i<=N;i++){
			if(check[i]==0)
				for(int j=i*i;j<N;j=j+i)
					check[j]=1;
	}
	while(t--){
		kt();
	}
}
