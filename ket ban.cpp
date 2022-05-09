#include<bits/stdc++.h>
using namespace std;
bool chuaxet[1000005];
vector<int>List[1000005];
int DFS(int u){
	chuaxet[u]=false;
	int ans=1;
	for(int i=0;i<List[u].size();i++){
		int v=List[u][i];
		if(chuaxet[v])	ans += DFS(v);
	}
	return ans;
}
int main(){
	int t,x,y,n,m,d;	cin >> t;
	while(t--){
		memset(chuaxet,true,sizeof(chuaxet));
		for(int i=0;i<1000005;i++)		List[i].clear();
		cin >> n >> m;
		for(int i=1;i<=m;i++){
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		int res=0;
		for(int i=1;i<=n;i++){
			if(chuaxet[i]){
				res=max(res,DFS(i));
			}
		}
		cout << res << endl;
	}
}
