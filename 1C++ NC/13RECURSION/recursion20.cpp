#include<bits/stdc++.h>
using namespace std;

int cnt(int n){
    if (n==1) return 0;
    int a=1e5,b=1e5,c=1e5;
    if (n%2==0) a=1+cnt(n/2);
    if (n%3==0) b=1+cnt(n/3);
    if (n>1) c=1+cnt(n-1);
    return min({a,b,c});
}

int main(){
    int n; cin>>n;
    cout<<cnt(n);
}
