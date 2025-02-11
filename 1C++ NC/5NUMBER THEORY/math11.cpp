#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	if (n<2) return false;
	for (int i=2;i*i<=n;i++)
		if (n%i==0) return false;
	return true;
}

int smallestDivisor(int n) {
	for (int i=2;i*i<=n;i++){
		if (n%i==0 and isPrime(i)) return i;
	}
}

int main(){
	int n;
	cin>>n;
	for (int i=1;i<=n;i++){
		if (i==1) cout<<1;
		else if (isPrime(i)) cout<<i;
		else if (i%2==0) cout<<2;
		else {
			cout<<smallestDivisor(i);
		}
		cout<<endl;
	}
}
