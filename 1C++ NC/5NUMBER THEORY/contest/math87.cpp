#include<bits/stdc++.h>
using namespace std;
#define ll long long


bool check(ll n){
	for (ll i=cbrt(n)+1;i>=1;i--){
		if (i*i*i==n) return true;
	}
	return false;
}

int main(){
	int t;
	cin>>t;
	for (int i=1;i<=t;i++){
		ll n;
		cin>>n;
		if (check(n)) cout<<"28tech\n";
		else cout<<"29tech\n";
	}
}
