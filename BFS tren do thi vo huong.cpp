#include<bits/stdc++.h>
using namespace std;
int n,m,u;
vector<int>List[1005];
bool chuaxet[1005];
void BFS(int u){
	queue<int>q;	q.push(u);
	chuaxet[u]=false;
	cout << u << " ";
	while(!q.empty()){
		int x=q.front(); q.pop();
		for(int i=0;i<List[x].size();i++){
			int y=List[x][i];
			if(chuaxet[y]){
				q.push(y);	chuaxet[y]=false;
				cout << y << " ";
			}
		}
	}
}
int main(){
	int t,x,y;	cin >> t;
	while(t--){
		cin >> n >> m >> u;
		memset(chuaxet,true,sizeof(chuaxet));
		for(int i=0;i<1005;i++)	List[i].clear();
		for(int i=1;i<=m;i++){
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		BFS(u);
		cout << endl;
	}
}
