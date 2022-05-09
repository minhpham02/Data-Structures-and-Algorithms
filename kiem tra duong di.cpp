#include<bits/stdc++.h>
using namespace std;
int n,m;
bool chuaxet[1005];
vector<int>List[1005];
void DFS(int u){
	chuaxet[u]=false;
	for(int i=0;i<List[u].size();i++){
		int v=List[u][i];
		if(chuaxet[v]){
			DFS(v);
		}
	}
}
int main(){
	int t,x,y,Q,a,b;	cin >> t;
	while(t--){
		for(int i=0;i<1005;i++)		List[i].clear();
		cin >> n >> m;
		for(int i=1;i<=m;i++){
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		cin >> Q;
		for(int i=1;i<=Q;i++){
			memset(chuaxet,true,sizeof(chuaxet));
			cin >> a >> b;
			DFS(a);
			if(!chuaxet[b])	cout << "YES\n";
			else cout << "NO\n";
		}
	}
}
