#include<bits/stdc++.h>
using namespace std;
int A[10];
int check(){
	for(int i=1;i<=8;i++){
		if((A[1]==0 && A[2]==0) || (A[3]==0 && A[4]==0) || (A[5]==0) || (A[3]==1))	return 0;
	}
	return 1;
}
void in(){
		if(check()){
			for(int i=1;i<=8;i++){
			if(i==3 || i==5)	cout << '/';
			if(A[i]==1)	cout << '2';
			else cout << A[i];
		}
		cout << endl;
	}
}
void Try(int i){
	for(int j=0;j<=1;j++){
		A[i]=j;
		if(i==8)	in();
		else Try(i+1);
	}
}
int main(){
	Try(1);
}
