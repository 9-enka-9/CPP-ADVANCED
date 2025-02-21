#include<bits/stdc++.h>
using namespace std;
#define ll long long

int sumDigits(ll n){
    if (n==0) return n;
    return n%10 + sumDigits(n/10);
}

int main(){
    ll n; cin>>n;
    cout<<sumDigits(n);
}
