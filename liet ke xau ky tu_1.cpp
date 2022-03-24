#include<bits/stdc++.h>
using namespace std;
char C; int K,OK,H;
string A;
void in(){
	for(int i=1;i<=K;i++)	cout << char(A[i]+'A'-1);
	cout << endl;
}
void sinh(){
	while(1){
		int i=K;
		if(A[1]==H){
		 OK=1;	break;
	}
		while(A[i]<H){
			for(int j=i; j<=K; j++) A[j]++;
			in();
		}
		while(A[i]==H) i--;
		A[i]++;
		for(int j=i+1; j<=K; j++) A[j]=A[i];
		in();
	}
}
int main(){
	cin >> C >> K;
	for(int i=1;i<=K;i++)	A[i]=1;
	H = C-'A'+1;
	OK=0;
	while(!OK){
		in();
		sinh();
	}
}
	
