#include<bits/stdc++.h>
using namespace std;
vector<int>List[1005];
bool chuaxet[1005];
void BFS(int u){
	queue<int>q;	q.push(u);
	chuaxet[u]=false;
	while(!q.empty()){
		int x=q.front();	q.pop();
		for(int i=0;i<List[x].size();i++){
			int y=List[x][i];
			if(chuaxet[y]){
				q.push(y); chuaxet[y]=false;
			}
		}
	}
}
int main(){
	int t,n,m,x,y,d;	cin >> t;
	while(t--){
		memset(chuaxet,true,sizeof(chuaxet));
		for(int i=0;i<1005;i++)	List[i].clear();
		cin >> n >> m;
		for(int i=1;i<=m;i++){
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		d=0;
		for(int i=1;i<=n;i++)
			if(chuaxet[i]){
				d++;
				BFS(i);
			}
		cout << d << endl;
	}
}
