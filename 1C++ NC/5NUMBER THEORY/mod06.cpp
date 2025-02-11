#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main (){
	const int MOD =1e9+7;
	int a,b;
	cin>>a>>b;
	ll ans=1;
	for (int i=1;i<=b;i++){
		ans=(ans*a)%MOD;
	}
	cout<<ans;
}
