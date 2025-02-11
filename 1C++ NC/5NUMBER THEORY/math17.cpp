#include<bits/stdc++.h>
using namespace std;

int lastPrimeFactor(int n){
	int res=1;
	for (int i=2;i*i<=n;i++){
		while (n%i==0){
			res=i;
			n/=i;
		}
	}
	if (n!=1) res=n;
	return res;
}

int main(){
	int t; cin>>t;
	while (t--){
		int n; cin>>n;
		cout<<lastPrimeFactor(n)<<endl;
	}
}
