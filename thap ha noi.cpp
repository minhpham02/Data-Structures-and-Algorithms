#include<bits/stdc++.h>
using namespace std;
int  N;
void Try(int i,char A ,char B ,char C){
	if(i==1)	cout << A <<" -> " << C << endl;
	else{
		Try(i-1,A,C,B);
		cout << A <<" -> " << C << endl;
		Try(i-1,B,A,C);
	}
}
int main(){
	cin >> N;
	Try(N,'A','B','C');
}
