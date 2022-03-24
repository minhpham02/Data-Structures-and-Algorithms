#include<bits/stdc++.h>
using namespace std;
queue<long long>tmp;
int main(){
	int t;
	cin >> t;
	while(t--){
		int N;
		cin >> N;
		tmp.push(9);
		while(1){
			long long A=tmp.front();
			if(A%N==0){
				cout << A << endl;	break;
			}
				tmp.pop();
				tmp.push(A*10);
				tmp.push(A*10+9);	
		}
	}
}
