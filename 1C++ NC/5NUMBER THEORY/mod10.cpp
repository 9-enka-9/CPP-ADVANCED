#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e9+7;

ll binpow(ll a, ll b){
	ll res=1;
	while (b){
		if (b%2!=0){
			res*=(a%mod);
			res%=mod;
		}
		b/=2;
		a*=(a%mod);
		a%=mod;
	}
	return res%mod;
}

int main(){
	int n;
	cin>>n;
	ll s=0;
	for(int i=1;i<=n;i++){
		s+=binpow(i,i);
		s%=mod;
	}
	cout<<s;
}
