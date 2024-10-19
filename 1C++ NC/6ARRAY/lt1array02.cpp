#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	const int mod=1e9+7;
	int n;
	cin>>n;
	int a[n+1];
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	ll t=1;
	for (int i=1;i<=n;i++){
		t*=(a[i]%mod);
		t%=mod;
	}
	cout<<t;
}
