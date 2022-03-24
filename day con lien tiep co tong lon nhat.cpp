#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,res=-1e9+7,tmp;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++)	cin >> a[i];
		for(int i=0;i<n;i++){
			tmp=0;
			for(int j=i;j<n;j++){
				tmp += a[j];
				if(tmp<0)	break;
				else res=max(res,tmp);
			}
		}
		cout << res << endl;
	}
}
