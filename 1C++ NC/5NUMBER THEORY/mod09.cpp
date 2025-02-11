#include<bits/stdc++.h>
using namespace std;

int main(){
	const int mod=100;
	int n,x=28,res=1;
	cin>>n;
	for (int i=1;i<=n;i++){
		res*=(x%mod);
		res%=mod;
	}
	cout<<res;
}
