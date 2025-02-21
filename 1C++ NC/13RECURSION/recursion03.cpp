#include<bits/stdc++.h>
using namespace std;

long long recurse(long long n){
    if (n==1) return 1;
    return n*n*n + recurse(n-1);
}

int main(){
    long long n; cin>>n;
    cout<<recurse(n);
}
