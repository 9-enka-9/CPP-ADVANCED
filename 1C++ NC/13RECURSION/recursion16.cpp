#include<bits/stdc++.h>
using namespace std;
#define ll long long

int m=-1;
ll maxn(ll n){
    if (n>=10)
        return max(n%10, maxn(n/10));
    else return n;
}

ll minn(ll n){
    if (n>=10)
        return min(n%10, minn(n/10));
    else return n;
}

int main(){
    ll n; cin>>n;
    if (n==0){
        cout<<0<<" "<<0;
        return 0;
    }
    cout<<maxn(n)<<" ";
    cout<<minn(n);
}
