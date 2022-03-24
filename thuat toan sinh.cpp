#include<bits/stdc++.h>
using namespace std;
int A[20],n;
int check(){
	int l=1,r=n;
	while(l<r){
		if(A[l]!=A[r])	return 0;
		else{
		 l++;	r--;
		}
	}return 1;
}
void in(){
	for(int i=1;i<=n;i++){
		if(check()==1)	cout << A[i] << "\t";
	}
	cout << endl;
}
void Try(int i){
	for(int j=0;j<=1;j++){
		A[i]=j;
		if(i==n)	in();
		else Try(i+1);	
	}
}
int main(){
	cin >> n;
	Try(1);
}
