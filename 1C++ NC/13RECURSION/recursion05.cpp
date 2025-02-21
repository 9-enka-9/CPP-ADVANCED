#include<bits/stdc++.h>
using namespace std;

int recurse(int n){
    if (n==0) return 1;
    return n*recurse(n-1);
}

int main(){
    int n; cin>>n;
    cout<<recurse(n);
}
