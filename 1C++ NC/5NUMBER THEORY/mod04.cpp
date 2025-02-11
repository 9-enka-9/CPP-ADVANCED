#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main ( ){
	int n,m,k;
	cin>>n>>m>>k;
	int mod=1;
	ll ans=1;
	for (int i=1;i<=k;i++){
		mod*=10;
	}
	for (int i=1;i<=m;i++){
		ans*=(n%mod);
		ans%=mod;
	}
	cout<<ans;
}
