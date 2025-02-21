#include<bits/stdc++.h>
using namespace std;
#define ll long long

void decimalToHexa(ll n){
    if (n>=16) decimalToHexa(n/16);

    if ((n%16)>=0 and (n%16)<=9){
        cout<<(n%16);
    } else {
        cout<<(char) ((n%16)-10+'A');
    }
}

int main(){
    ll n; cin>>n;
    decimalToHexa(n);
}
