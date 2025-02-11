#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(ll n){
	if (n<2) return false;
	for (ll i=2;i*i<=n;i++){
		if (n%i==0) return false;
	}
	return true;
}

bool isPerfect(ll n){
	for (ll p=1;p<=32;p++){
		ll t=pow(2,p)-1;
		if (isPrime(p) and isPrime(t)){
			ll hh=pow(2,p-1)*t;
			if (n==hh) return true;
		}
	}
	return false;
}

int main(){
	ll n; cin>>n;
	if (isPerfect(n)) cout<<"YES";
	else cout<<"NO";
}
