#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,i;
	cin >> t;
	while(t--){
		cin >> n;
		long long a[n],b[n-1];
		for(i=0;i<n;i++)	cin >> a[i];
		for(i=0;i<n-1;i++)	cin >> b[i];
		for(i=0;i<n;i++){
		    if(a[i]!=b[i]){
		        cout << i << endl;
		        break;
		    }
		}
	}
}
 

