#include<bits/stdc++.h>
using namespace std;
vector<int>List[1005];
int n,m,u,v,Find[1005];
bool chuaxet[1005];
void BFS(int u){
	queue<int>q;	q.push(u);
	chuaxet[u]=false;
	while(!q.empty()){
		int x = q.front();	q.pop();
		for(int i=0;i<List[x].size();i++){
			int k=List[x][i];
			if(chuaxet[k]){
				Find[k]=x;	chuaxet[k]=false;
				q.push(k);
			}	
		}
	}
}
void FindBFS(int u,int v){
	vector<int>res;
	if(!Find[v])	cout << -1;
	else{
		int t=v;
		while(t>0){
			res.push_back(t);
			t=Find[t];
		}
	}
	for(int i=res.size()-1;i>=0;i--)	cout << res[i] << ' ';
}
int main(){
	int t,x,y;	cin >> t;
	while(t--){
		cin >> n >> m >> u >> v;
		memset(chuaxet,true,sizeof(chuaxet));
		memset(Find,0,sizeof(Find));
		for(int i=0;i<1005;i++)	List[i].clear();
		for(int i=1;i<=m;i++){
			cin >> x >> y;
			List[x].push_back(y);
		}
		BFS(u);
		FindBFS(u,v);
		cout << endl;
	}
}
