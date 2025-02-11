#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isPretty(ll n){
	while (n){
		int t=n%10;
		if (t!=0 and t!=2 and t!=6 and t!=8) return false;
		n/=10;
	}
	return true;
}

int main(){
	int n; cin>>n;
	ll a[n];
	map<ll,int> mp;
	for (int i=0;i<n;i++){
		cin>>a[i];
		if (isPretty(a[i])) mp[a[i]]++;
	}
	for (int i=0;i<n;i++){
		if (mp[a[i]]!=0) {
			cout<<a[i]<<" "<<mp[a[i]]<<endl;
			mp[a[i]]=0;
		}
	}
}
