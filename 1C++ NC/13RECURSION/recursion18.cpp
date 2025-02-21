#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll chan(ll n){
    int t = n%10;
    if (n>0 and t%2==0) return t+chan(n/10);
    else if (n>0) return chan(n/10);
}

ll le(ll n){
    int t=n%10;
    if (n>0 and t%2!=0) return t+le(n/10);
    else if (n>0) return le(n/10);
}

int main(){
    ll n; cin>>n;
    cout<<chan(n)<<endl;
    cout<<le(n);
}
