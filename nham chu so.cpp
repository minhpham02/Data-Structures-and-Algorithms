#include<bits/stdc++.h>
using namespace std;
void in(string A,string B){
	int a=0,b=0;
	for(int i=0;i<A.length();i++){
		a = a*10 + int(A[i]-48);
	}
	for(int i=0;i<B.length();i++){
		b =	b*10 + int(B[i]-48);
	}
	cout << a + b;
}
void Min(string A,string B){
	for(int i=0;i<A.length();i++)
		if(A[i]=='6')	A[i]='5';
	for(int i=0;i<B.length();i++)
		if(B[i]=='6')	B[i]='5';
	in(A,B);
}
void Max(string A,string B){
	for(int i=0;i<A.length();i++)
		if(A[i]=='5')	A[i]='6';
	for(int i=0;i<B.length();i++)
		if(B[i]=='5')	B[i]='6';
	in(A,B);
}
int main(){
	string A,B;
	cin >> A >> B;
	Min(A,B);
	cout << ' ';
	Max(A,B);
}

