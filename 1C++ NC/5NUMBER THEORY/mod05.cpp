#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main (){
	const int MOD=1e9+7;
	int n;
	cin>>n;
	ll f1=1, f2=1, ans=0;
	for (int i=1;i<=n-2;i++){
		ans=(3*(f1%MOD)%MOD + 2*(f2%MOD)%MOD)%MOD;
		f1=f2;
		f2=ans;
	}
	cout<<ans;
}
