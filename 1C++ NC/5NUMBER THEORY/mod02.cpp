#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main (){
	const int mod=1e9+7;
	int n;
	cin>>n;
	ll s=1;
	for (int i=1;i<=n;i++){
		int x; cin>>x;
		s*=(x%mod);
		s%=mod;
	}
	cout<<s;
}
