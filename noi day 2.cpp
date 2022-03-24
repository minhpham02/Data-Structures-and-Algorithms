#include<bits/stdc++.h>
using namespace std;
int M = 1e9+7;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		priority_queue<long long,vector<long long>,greater<long long> > res;
		long long a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
			res.push(a[i]);
		}
		long long c,d,sum=0,s=0;
		while(res.size()){
			c = res.top();	res.pop();
			d = res.top();	res.pop();
			sum = (c+d)%M;
			s = (s+sum)%M;
			if(res.size()==0)	break;
			res.push(sum);
		}
		cout << s << endl;
	}
}
