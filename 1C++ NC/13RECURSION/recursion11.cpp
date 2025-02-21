#include<bits/stdc++.h>
using namespace std;
#define ll long long

void decimalToBinary(ll n){
    if (n==0 or n==1) {
        cout<<n; return;
    }
    if (n>1){
        decimalToBinary(n/2);
    }
    cout<<n%2;
}

int main(){
    ll n; cin>>n;
    decimalToBinary(n);
}
