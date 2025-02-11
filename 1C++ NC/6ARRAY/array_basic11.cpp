#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long fib[100];

void fibo(){
	fib[0]=0;
	fib[1]=1;
	for (int i=2;i<=92;i++){
		fib[i]=fib[i-1]+fib[i-2];
	}
}

int main(){
	fibo();
	int n; cin>>n;
	ll a[n];
	for (int i=0;i<n;i++) cin>>a[i];
	bool check=false;
	for (int i=0;i<n;i++){
		bool ok=false;
		for (int j=0;j<=92;j++){
			if (a[i]==fib[j]){
				check=true;
				ok=true;
				break;
			}
		}
		if (ok) cout<<a[i]<<" ";
	}
	if (not check) cout<<"NONE";
}
