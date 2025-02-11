#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int mod=1e9+7;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin>>n;
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];
    sort(a, a+n);
    ll s=0;
    for (int i; i<n;i++){
        s+= (1ll*(a[i]%mod)*(i%mod))%mod;
        s%=mod;
    }
    cout<<s;
}
