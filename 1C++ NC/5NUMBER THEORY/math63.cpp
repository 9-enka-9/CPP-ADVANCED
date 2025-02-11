#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	const int mod=1000000007;
	int n; cin>>n;
	ll f[n+2];
	f[1]=0; f[2]=1;
	for (int i=3;i<=n;i++){
		f[i]=f[i-1]%mod+f[i-2]%mod;
		f[i]%=mod;
	}
	cout<<f[n];
}
