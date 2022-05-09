#include<bits/stdc++.h>
using namespace std;
int n,m,u,v;
int fnd[1005];
vector<int>List[1005];
bool chuaxet[1005];
void DFS(int u){
	chuaxet[u]=false;
	for(int i=0;i<List[u].size();i++){
		int k=List[u][i];
		if(chuaxet[k]){
			fnd[k]=u;
			DFS(k);
		}
	}
}
void Find(int u,int v){
	vector<int>res;
	if(!fnd[v])	cout << -1;
	else{
		int t=v;
		while(t>0){
			res.push_back(t);
			t=fnd[t];
		}
	}
	for(int i=res.size()-1;i>=0;i--)	cout << res[i] << " ";
}
int main(){
	int t,x,y;	cin >> t;
	while(t--){
		cin >> n >> m >> u >> v;
		memset(chuaxet,true,sizeof(chuaxet));
		memset(fnd,0,sizeof(fnd));
		for(int i=0;i<1005;i++)	List[i].clear();
		for(int i=1;i<=m;i++){
			cin >> x >> y;
			List[x].push_back(y);
		}
		DFS(u);
		Find(u,v);
		cout << endl;
	}
}
