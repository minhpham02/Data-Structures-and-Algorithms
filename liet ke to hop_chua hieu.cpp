#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<set>
#include<sstream>
using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl "\n"
#define FOR(i,a,b) for(int i=a; i<=b ; i++)
#define FO(i,a,b) for(int i=a; i<b ; i++)
#define FORD(i,a,b) for(int i=a; i>=b ; i--)
#define FOD(i,a,b) for(int i=a; i>b ; i--)
#define PI 3.141592653589793238
#define vi vector<int>
#define vll vector<ll>
#define vstr vector<string>
int m,n,k;
int a,x[100];
set<int> st;
void in(){
    FOR(i, 1, k){
        auto it=st.begin();
        advance(it, x[i]-1);
        cout<<*it<<" ";
    }
    cout<<endl;

}
void Try(int i,int n ) {
    FOR(j, x[i-1]+1, n+k-i){
        
        x[i]=j;
        if(i==k) in();
        else Try(i+1,n);
    }
}

void solve(){
    cin>>m>>k;
    FOR(i, 1, m) {
        cin>>a;
        st.insert(a);
    }
    n=st.size();
    Try(1,n);
}
int main()
{
    faster();
    int t=1;
//    cin >> t;
    while (t--)
    {
        solve();
    }
}
