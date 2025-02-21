#include<bits/stdc++.h>
using namespace std;
#define ll long long

void firstDigit(ll n){
    if (n<10){
        cout<<n;
    } else {
        firstDigit(n/10);
    }
}

int main(){
    ll n; cin>>n;
    firstDigit(n);
}
