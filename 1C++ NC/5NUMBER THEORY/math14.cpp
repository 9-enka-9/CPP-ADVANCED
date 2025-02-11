#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod=1e9+7;


ll legendree(ll n, ll p){
	ll res=0;
	for (ll i=p;i<=n;i*=p){
		res+=n/i;
		res%=mod;
	}
	return res;
}

int main (){
	ll n;
	cin>>n;
	cout<<legendree(n,5);
}
