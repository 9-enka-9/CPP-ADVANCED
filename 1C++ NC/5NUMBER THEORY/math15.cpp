#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main (){
	ll n; cin>>n;
	ll ts=0;
	for (ll i=2;i*i<=n;i++){
		if (n%i==0){
			ts++;
			ll c=0;
			while (n%i==0){
				c++;
				n/=i;
			}
			if (c>1){
				cout<<0;
				return 0;
			}
		}
	}
	if (n!=1) ts++;
	if (ts==3) cout<<1;
	else cout<<0;
}
