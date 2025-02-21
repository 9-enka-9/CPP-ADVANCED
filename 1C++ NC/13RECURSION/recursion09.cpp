#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;

ll spow(ll a, ll b){
    if (a==0) return 0;
    if (a==1) return 1;
    if (b==1) return a;
    ll t=spow(a,b/2)%mod;
    if (b%2==0) return ((t%mod)*(t%mod))%mod;
    else return ((((t%mod)*(t%mod))%mod)*(a%mod))%mod;
}

int main(){
    ll a,b; cin>>a>>b;
    cout<<spow(a,b)%mod;
}
