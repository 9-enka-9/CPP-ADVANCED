#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll n;	cin>>n;
	for (ll i=2;i*i<=n;i++){
		if (n%i==0){
			int c=0;
			while (n%i==0){
				c++;
				n/=i;
			}
			cout<<i<<"^"<<c;
			if (n!=1) cout<<" * ";
		}
	}
	if (n!=1) cout<<n<<"^1";
}
