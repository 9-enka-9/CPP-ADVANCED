#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll tonguoc(ll n){
	ll s=1+n;
	for (ll i=2;i*i<=n;i++){
		if (n%i==0){
			s+=i;
			if (n/i!=i) s+=(n/i);
		}
	}
	return s;
}

int main(){
	ll n; cin>>n;
	cout<<tonguoc(n);
}
