#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	ll n; cin>>n;
	while (n){
		if (n%10!=6 and n%10!=0 and n%10!=8){
			cout<<0;
			return 0;
		}
		n/=10;
	}
	cout<<1;
}
