#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	if (n<2) return false;
	for (int i=2;i*i<=n;i++){
		if (n%i==0) return false;
	}
	return true;
}

int main(){
	int n; cin>>n;
	int a[n+5];
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	int s=0, c=0;
	for (int i=1;i<=n;i++){
		if (isPrime(a[i])){
			c++;
			s+=a[i];
		}
	}
	cout<<fixed<<setprecision(3)<<(double)s/c;
}
