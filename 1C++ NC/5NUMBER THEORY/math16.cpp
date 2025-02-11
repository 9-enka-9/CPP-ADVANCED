#include<bits/stdc++.h>
using namespace std;
#define ll long long


bool isPrime(ll n){
	if (n<2) return false;
	for (ll i=2;i*i<=n;i++) 
		if (n%i==0) return false;
	return true;
}

int sumDigits(ll n){
	int s=0;
	while (n){
		s+=n%10;
		n/=10;
	}
	return s;
}

int sumPrimeFactors(ll n){
	int s=0;
	for (ll i=2;i*i<=n;i++){
		if (n%i==0){
			while (n%i==0){
				s+=sumDigits(i);
				n/=i;
			}
		}
	}
	if (n!=1) s+=sumDigits(n);
	return s;
}

int main() {
	ll n;	cin>>n;
//	cout<<isPrime(n)<<" "<<sumDigits(n)<<" "<<sumPrimeFactors(n)<<endl;
	if (isPrime(n)==false and sumDigits(n) == sumPrimeFactors(n)) cout<<"YES";
	else cout<<"NO";
}
