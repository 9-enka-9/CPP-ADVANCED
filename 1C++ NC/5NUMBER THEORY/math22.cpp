#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll a,b; cin>>a>>b;
	ll t=sqrt(a), res=0;
	if (t*t==a) res=sqrt(b)-t+1;
	else res=sqrt(b)-t;
	cout<<res;
	
}

