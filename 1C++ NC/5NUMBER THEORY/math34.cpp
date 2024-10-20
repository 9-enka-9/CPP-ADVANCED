#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a,ll b){
	while (b){
		ll t=a;
		a=b;
		b=t%b;
	}
	return a;
}

ll lcm(ll a, ll b){
	return a/gcd(a,b) *b;
}

int main(){
	ll x,y,z; 
	int n;
	cin>>x>>y>>z>>n;
	ll lcmnum=lcm(lcm(x,y),z);
	ll n10=pow(10,n-1);
	if (lcmnum>=n10*10){
		cout<<-1;
	} else {
		cout<<(n10+lcmnum-1)/lcmnum*lcmnum;		
	}
}

