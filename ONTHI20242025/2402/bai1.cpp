#include<bits/stdc++.h>
using namespace std;

const int mod=100;

int main(){
    freopen("TAILNUM.INP", 'r', stdin);
    freopen("TAILNUM.OUT", 'w', stdout);
    long long n,m; cin>>n>>m;
    long long s=1;
    for (int i=0;i<m;i++){
        s*=(n%mod);
        s%=mod;
    }
    cout<<setfill('0')<<setw(2)<<s;
}
