#include<bits/stdc++.h>
using namespace std;
long long s[1005];

bool isPrime(int n){
	if (n<2) return false;
	for (int i=2;i*i<=n;i++)
		if (n%i==0) return false;
	return true;
}

int main(){
	int n; cin>>n;
	int a[n];
	long long l=0,r=0;
	for (int i=0;i<n;i++){
		cin>>a[i];
		r+=a[i];
	}
	for (int i=0;i<n-1;i++){
		l+=a[i]; r-=a[i];
		if (isPrime(l-a[i]) and isPrime(r)) cout<<i<<" ";
	}
}
