#include<bits/stdc++.h>
using namespace std;
#define ll long long

//bool ok=true;
bool check(ll n){
    if (n==0) return true;
    int t=n%10;
    if (n>0 and t%2==0) return check(n/10);
    else return false;
}

int main(){
    ll n; cin>>n;
    if (check(n)) cout<<"YES";
    else cout<<"NO";
}
