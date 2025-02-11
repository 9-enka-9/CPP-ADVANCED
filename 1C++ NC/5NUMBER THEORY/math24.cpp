#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll demuoc(ll n){
	ll c=2;
	for (ll i=2;i*i<=n;i++){
		if (n%i==0){
			c++;
			if (n/i!=i) c++;
		}
	}
	return c;
}

int main(){
	ll n; cin>>n;
	cout<<demuoc(n);
}
