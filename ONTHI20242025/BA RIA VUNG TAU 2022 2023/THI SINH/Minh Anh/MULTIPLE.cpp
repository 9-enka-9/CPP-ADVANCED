#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 2023;

int main(){
    freopen("MULTIPLE.INP", "r", stdin);
    freopen("MULTIPLE.OUT", "w", stdout);
    int n; ll q; cin>>n>>q;
    ll res=0, lt=1;
    for (int i=0;i<n;i++){
        res= (res + lt)%mod;
        lt = (lt*q)%mod;
    }
    cout<<res;
}
