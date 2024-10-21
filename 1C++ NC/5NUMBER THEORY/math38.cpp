#include<bits/stdc++.h>
using namespace std;
#define ll long long
int const mod = 1e9+7;

int legendre(int n, int p){
	ll res=0;
	for (int i=p;i<=n;i*=p){
		res+=n/(i%mod);
		res%=mod;
	}
	return res;
}

bool isPrime(int n){
	if (n<2) return false;
	for (int i=2;i*i<=n;i++){
		if (n%i==0) return false;
	}
	return true;
}

int main() {
	int n; cin>>n;
	ll souoc=1;
	for (int i=2;i<=n;i++){
		if (isPrime(i)){
			souoc*=(legendre(n,i)%mod+1)%mod;
			souoc%=mod;
		}
	}
	cout<<souoc;
}
