#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		priority_queue<int,vector<int>,greater<int> >res; 
		for(int i=0;i<n;i++){
			cin >> a[i];
			res.push(a[i]);
		}
		long long c,d,sum=0,s=0;
		while(res.size()){
			c = res.top();	res.pop();
			d = res.top();	res.pop();
			sum = c + d;
			s += sum;
			if(res.size()==0)	break;
			res.push(sum);
		}
		cout << s << endl;
	}
}
