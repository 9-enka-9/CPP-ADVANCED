#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    freopen("demso.inp", "r", stdin);
    freopen("demso.out", "w", stdout);
    ll a,b,c; cin>>a>>b>>c;
    ll chiahet = (b/c) - ((a-1)/c);
    ll res = b-a+1-chiahet;
    cout<<res;
}
