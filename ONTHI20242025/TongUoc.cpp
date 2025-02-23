#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = (ll)1e9+7;

ll sumDivisors(ll n){
    if (n==1) return 1;
    ll t=((n%mod)+(1%mod))%mod;
    for (int i=2;i*i<=n;i++){
        if (n%i==0){
            t+=(i%mod);
            t%=mod;
            if (n/i!=i){
                t+=((n/i)%mod);
                t%=mod;
            }
        }
    }
    return t;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    ll n; cin>>n;
    ll s=0;
    for (ll i=1;i<=n;i++){
        s+=sumDivisors(i);
        s%=mod;
    }
    cout<<s;
}
