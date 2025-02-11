#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll n;
	cin>>n;
	for (ll i=1; i<=n;i++){
		ll i2=i*i;
		ll res = (i2*(i2-1))/2 - 4*i2 + 12*i - 8;
		cout<<res<<endl;
	}
}
