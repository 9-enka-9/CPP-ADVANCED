#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll f[100];
	f[1]=0; f[2]=1;
	for (int i=3;i<=93;i++){
		f[i]=f[i-1]+f[i-2];
	}
	ll n; cin>>n;
	for (int i=1;i<=93;i++){
		if (n==f[i]){
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
}
