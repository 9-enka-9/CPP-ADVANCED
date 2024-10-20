#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll phi(ll n){
	ll res=n;
	for (int i=2;i*i<=n;i++){
		if (n%i==0){
			res-=res/i;
			while(n%i==0){
				n/=i;
			}
		}
	}
	if (n!=1) res-=res/n;
	return res;
}

int main(){
	ll n; cin>>n;
	cout<<phi(n);
}
