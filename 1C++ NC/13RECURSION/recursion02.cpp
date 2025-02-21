#include<bits/stdc++.h>
using namespace std;

int recurse(int n){
    if (n==1) return 1;
    return n*n+recurse(n-1);
}

int main(){
    int n; cin>>n;
    cout<<recurse(n);
}
