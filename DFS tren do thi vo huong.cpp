#include<bits/stdc++.h>
using namespace std;
int n,m,u;
vector<int>List[1005];
bool chuaxet[1005];
void DFS(int u){
	chuaxet[u]=false;
	cout << u << " ";
	for(int i=0;i<List[u].size();i++){
		int v=List[u][i];
		if(chuaxet[v])	DFS(v);	
	}
}
int main(){
	int t,x,y;	cin >> t;
	while(t--){
		memset(chuaxet,true,sizeof(chuaxet));
		for(int i=0;i<1005;i++)	List[i].clear();
		cin >> n >> m >> u;
		for(int i=1;i<=m;i++){
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x); 
		}
		DFS(u);
		cout << endl;
	}
}
