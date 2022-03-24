#include<bits/stdc++.h>
using namespace std;
int A[20],n; bool B[20];	
void in(){
	for(int i=0;i<n;i++)	cout << A[i];
	cout << ' ';
}
void Try(int i){
	for(int j=0;j<n;j++){
		if(B[j]==false){
			B[j]=true;	A[i]=j;
			if(i==n)	in();
			else Try(i+1);
			B[j]=false;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=0;i<n;i++)	B[i]=false;
		Try(1);
		cout << endl;
	}
}
