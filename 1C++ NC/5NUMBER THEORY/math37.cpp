#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll const mod=1000000007;

ll binpow(ll a, ll b){
	ll res=1;
	while (b>0){
		if (b%2!=0) res=(res*a%mod)%mod;
		a=a%mod*a%mod;
		b/=2;
	}
	return res%mod;
}

int main(){
	ll a,b; cin>>a>>b;
	a%=mod;
	cout<<binpow(a,b);
}
