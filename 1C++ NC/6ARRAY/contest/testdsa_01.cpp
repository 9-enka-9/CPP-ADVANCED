#include<bits/stdc++.h>
using namespace std;
#define ll long long
int const mod=1e9+7;

ll binpow(ll a, ll b){
	ll res=1;
	a%=mod;
	while (b){
		if (b%2!=0) res=(res*a)%mod;
		b/=2;
		a*=a;
		a%=mod;
	}
	return res;
}

int main(){

	int n; cin>>n;
	ll a[n+5], b[n+5];
	for (int i=1;i<=n;i++)
		cin>>a[i];
	for (int i=1;i<=n;i++)
		cin>>b[i];
	
	ll s=0;
	for (int i=1;i<=n;i++){
		s+=binpow(a[i],b[i]);
		s%=mod;
	}
	cout<<s;
}
