#include<bits/stdc++.h>
using namespace std;

int c(int k, int n){
    if (k==1) return n;
    if (k==n) return 1;
    return c(k-1,n-1) + c(k,n-1);
}

int main(){
    int n,k; cin>>n>>k;
    cout<<c(k,n);
}
