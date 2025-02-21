#include<bits/stdc++.h>
using namespace std;
#define ll long long

int cntDigits(int n){
    if (n==0) return 0;
    return 1+cntDigits(n/10);
}

int main(){
    ll n; cin>>n;
    if (n==0){
        cout<<1; return 0;
    }
    cout<<cntDigits(n);
}
