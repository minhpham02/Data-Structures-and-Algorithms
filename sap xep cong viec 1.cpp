#include<bits/stdc++.h>

using namespace std;

struct work{
	int S,F;
};
work A[1005];
bool check(work a,work b){
	if(a.F<b.F) return 1;
	return 0;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,tmp=1,res=0;
		cin >> n;
		for(int i=0;i<n;i++) cin >> A[i].S;
		for(int i=0;i<n;i++) cin >> A[i].F;
		sort(A,A+n,check);
		for(int i=1;i<n;i++){
			if(A[i].S>=A[res].F){
				tmp++;
				res=i;
			}
		}
		cout << tmp << endl;
	}
}
