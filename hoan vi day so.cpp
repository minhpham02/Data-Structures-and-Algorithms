#include<bits/stdc++.h>
using namespace std;
int N,A[11],OK=0;
void in(){
	for(int i=1;i<=N;i++)	cout << A[i] << ' ';
	cout << endl;
}
void sinh(){
	int i=N-1;
	while(A[i]>A[i+1])	i--;
	if(i==0)	OK=1;
	else{
		int j=N;
		while(A[j]<A[i])	j--;
		swap(A[i],A[j]);
		int l=i+1,r=N,t;
		while(l<r){
			swap(A[l],A[r]);
			l++;	r--;
		}
	}
}
int main(){
	cin >> N;
	for(int i=1;i<=N;i++)	cin >> A[i];
	sort(A,A+N+1);
	cout << endl;
	while(!OK){
		in();
		sinh();
	}
}
