#include<bits/stdc++.h>
using namespace std;
const int MAX = 1e9+7;
int main(){
	int t;
	cin >> t;
	while(t--){
		int N;	long long S=0;
		cin >> N;
		int A[N];
		for(int i=0;i<N;i++)	cin >> A[i];
		sort(A,A+N);
		for(int i=0;i<N;i++){
			S += (A[i]*i)%MAX;
		}
		cout << S << endl;
	}
}
