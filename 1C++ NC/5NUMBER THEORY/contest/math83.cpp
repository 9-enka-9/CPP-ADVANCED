#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	ll n;
	cin>>n;
	while (n%7==0){
		n/=7;
	}
	if (n==1) cout<<"28tech";
	else cout<<"29tech";
}
