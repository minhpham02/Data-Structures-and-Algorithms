#include<bits/stdc++.h>
using namespace std;
string A;	bool B[26];	char C;
int H;
int check(){
	for(int i=1;i<=H;i++){
		if(H>=5){
			if((A[1]=='A' && A[H]=='E') || (A[1]=='E' && A[H]=='A') || (A[i]=='A' && A[i+1]=='E') || (A[i]=='E' && A[i+1]=='A'))	return 1;
		}else{
			if(A[1]=='A' || A[H]=='A')	return 1;
		}
	}
	return 0;
}
void in(){
		if(check()){
			for(int i=1;i<=H;i++){
				cout << A[i];
		}
		cout << endl;
	}
}
void Try(int i){
	for(int j=1;j<=H;j++){
		if(B[j]==false){
			A[i]='A'+j-1;	B[j]=true; 
			if(i==H)	in();
			else Try(i+1);
			B[j] = false;
		}
	}
}
int main(){
	cin >> C;
	H = C-'A' + 1;
	for(int i=1;i<=H;i++)	B[i]=false;
	Try(1);
}
