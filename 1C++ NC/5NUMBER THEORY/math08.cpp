#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(ll n){
	if (n<2) return false;
	for (int i=2;i*i<=n;i++){
		if (n%i==0) return false;
	}
	return true;
}

int main(){
	ll n; cin>>n;
	for (ll i=2;i*i<=n;i++){
		if (isPrime(i)){
			cout<<i*i<<" ";
		}
	}
}
