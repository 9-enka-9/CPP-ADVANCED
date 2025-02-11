#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	ll a,b; cin>>a>>b;
	ll start = ceil(sqrt(a));
	for (ll i=start;i*i<=b;i++){
		if (i*i<a) continue;
		cout<<i*i<<" ";
	}
}
