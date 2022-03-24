#include<bits/stdc++.h>
using namespace std;
int A[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int main(){
	int t;
	cin >> t;
	while(t--){
		int N,count=0;
		cin >> N;
		while(N!=0){
			for(int i=9;i>=0;i--){
				if(N>=A[i]){
					N -= A[i];
					count++;
					break;
				}
			}
		}
		cout << count << endl;
	}
}
