#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll rev(ll n){
    ll lat=0;
	while (n!=0){
    	lat=lat*10+n%10;
    	n/=10;
	}
	return lat;
}

int main(){
    ll n; cin >> n;
    cout << rev(n);
    return 0;
}

