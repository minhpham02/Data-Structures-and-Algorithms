#include<bits/stdc++.h>
using namespace std;
vector<long long>tmp;
int N;
void Try(long long i){
	if(i>=1e17)	return;
	tmp.push_back(i);
	Try(i*10);
	Try(i*10+9);
}
int main(){
	int t;
	cin >> t;
	Try(9);
	sort(tmp.begin(),tmp.end());
	while(t--){
		cin >> N;
		for(int i=0;i<tmp.size();i++){
			if(tmp[i]%N==0){
				cout << tmp[i] << endl;
				break;
			}
		}
	}
}
