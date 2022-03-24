#include<bits/stdc++.h>
using namespace std;
void xuly(int a[],int n){
    int b[n]={0},i,j;
    for(i=0;i<n;i++){
            if(b[i]==0){
                b[i]=1;
                for(j=i+1;j<n;j++)
                    if(a[j]==a[i]){
                         b[i]++;
                         b[j]=-1;
                    }
        }
    }int max=1;
    for(int i=0;i<n;i++){
    	if(b[i]>max)	max=b[i];
	}
	if(max<=n/2)	cout << "NO\n";
	else{
	for(int i=0;i<n;i++){
		if(b[i]==max)	cout << a[i] << endl;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++)	cin >> a[i];
		xuly(a,n);
	}
}
