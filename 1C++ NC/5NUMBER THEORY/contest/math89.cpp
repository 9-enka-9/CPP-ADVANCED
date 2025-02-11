#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool nto(int n){
	for (int i=2;i*i<=n;i++){
		if (n%i==0) return false;
	}
	return true;
}

int main(){
	const int mod=1e9+7;
	int n;
	cin>>n;
	ll s=1;
	for (int i=2;i<=n;i++){
		if (nto(i)){
			s*=(i%mod);
			s%=mod;
		}
	}
	cout<<s;
}
