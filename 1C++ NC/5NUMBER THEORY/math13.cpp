#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n, p; cin>>n>>p;
	ll res=0;
	for (ll i=p;i<=n;i*=p){
		res+=n/i;
	}
	cout<<res;
}
