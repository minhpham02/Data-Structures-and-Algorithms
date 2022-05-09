#include<bits/stdc++.h>
using namespace std;
void xuly(string s,int n){
	int f[26];
	memset(f,0,sizeof(f));
	for(int i=0;i<s.length();i++)	f[s[i]-'A']++;
	priority_queue<long long>pq;
	for(int i=0;i<26;i++)	pq.push(f[i]);
	long long res=0;
	while(!pq.empty()){
		long long tmp=pq.top();
		if(n){
			pq.pop();
			pq.push(tmp-1);	n--;
		}else{
			res += tmp*tmp;
			pq.pop();
		}
	}
	cout << res << endl;
}
int main(){
	int t,n;	cin >> t;
	while(t--){
		cin >> n;
		scanf("\n");
		string s;	cin >> s;
		xuly(s,n);
	}
}
