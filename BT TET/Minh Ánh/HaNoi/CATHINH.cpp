#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("CATHINH.INP", "r", stdin);
    freopen("CATHINH.OUT", "w", stdout);
    long long m,n,k; cin>>m>>n>>k;

    long long karea = (m/k)*(n/k)*(k*k);
    cout<<m*n-karea;
}
