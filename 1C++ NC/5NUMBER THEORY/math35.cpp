#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b) {
	while (b){
		ll t=a;
		a=b;
		b=t%b;		
	}
	return a;
}

int main(){
	ll a,b; cin>>a>>b;
	ll uoc=gcd(a,b);
	cout<<uoc<<" "<<a/uoc*b;
}
