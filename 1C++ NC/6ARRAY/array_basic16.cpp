#include<bits/stdc++.h>
using namespace std;

int s=0;

bool isPrime(int n){
	if (n<2) return false;
	for (int i=2;i*i<=n;i++){
		if (n%i==0) return false;
	}
	return true;
}

bool isSquare(int n){
	int t=sqrt(n);
	return t*t==n;
}

bool isPalin(int n){
	int rev=0,t=n;
	while (n){
		rev=rev*10+n%10;
		s+=n%10;
		n/=10;
	}
	return rev==t;
}


int main(){
	int n; cin>>n;
	int a[n];
	for (int i=0;i<n;i++) cin>>a[i];
	int c1=0,c2=0,c3=0,c4=0;
	for (int i=0;i<n;i++){
		s=0;
		if (isPrime(a[i])) c1++;
		if (isPalin(a[i])) c2++;
		if (isSquare(a[i])) c3++;
		if (isPrime(s)) c4++;
	}
	cout<<c1<<endl<<c2<<endl<<c3<<endl<<c4;
	
}
