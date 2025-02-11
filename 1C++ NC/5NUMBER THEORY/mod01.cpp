#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main (){
	const int d=1e9+7;
	int n;
	cin>>n;
	ll s=0;
	for (int i=1;i<=n;i++){
		ll x; cin>>x;
		s+=(x%d); //phai co dau ngoac
	}
	cout<<s%d;
}
