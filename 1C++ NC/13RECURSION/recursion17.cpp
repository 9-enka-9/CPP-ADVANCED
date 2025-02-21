#include<bits/stdc++.h>
using namespace std;
#define ll long long

void right(ll n){
    if (n<=0)
        return;
    right(n/10);
    cout<<n%10<<" ";
}

void left(ll n){
    if (n<=0) return;
    cout<<n%10<<" ";
    left(n/10);
}

int main(){
    ll n; cin>>n;
    right(n);
    cout<<endl;
    left(n);
}
