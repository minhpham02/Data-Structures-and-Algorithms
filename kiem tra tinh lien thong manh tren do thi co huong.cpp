#include<bits/stdc++.h>
using namespace std;
bool chuaxet[1005];
vector<int>List[1005];
void DFS(int u){
	chuaxet[u]=false;
	for(int i=0;i<List[u].size();i++){
		int v=List[u][i];
		if(chuaxet[v])	DFS(v);
	}
}
int main(){
	int t,x,y,n,m,d;	cin >> t;
	while(t--){
		memset(chuaxet,true,sizeof(chuaxet));
		for(int i=0;i<1005;i++)		List[i].clear();
		cin >> n >> m;
		for(int i=1;i<=m;i++){
			cin >> x >> y;
			List[x].push_back(y);
			//List[y].push_back(x);
		}
		d=0;
		for(int i=1;i<=n;i++){
			if(chuaxet[i]){
				d++;
				DFS(i);
			}
		}
		if(d==1)	cout << "YES\n";
		else cout << "NO\n";
	}
}
