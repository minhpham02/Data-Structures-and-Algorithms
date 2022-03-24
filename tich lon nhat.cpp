#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n],x=0,y=0,b[4],m=0;
	long long z=0,t=0;
	for(int i=0;i<n;i++)	cin >> a[i];
	sort(a,a+n);
	x = a[0]*a[1];	y = a[n-1]*a[n-2];
	z = y*a[n-3];	t = x*a[n-1];
	b[0]=x; b[1]=y;	b[2]=z;	b[3]=t;
	sort(b,b+4);	cout << b[3];
}
