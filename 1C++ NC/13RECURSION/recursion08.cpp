#include<bits/stdc++.h>
using namespace std;
#define ll long long


ll gcd(ll a, ll b){
    if (b==0) return a;
    return gcd(b,a%b);
}

int main(){
    ll a,b; cin>>a>>b;
    ll ucln=gcd(a,b);
    cout<<ucln<<" "<<a/ucln*b;
}
