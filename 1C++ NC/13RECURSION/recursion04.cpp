#include<bits/stdc++.h>
using namespace std;

int recurse(int n){
    if (n==1) return -1;
    if (n%2==0) return n + recurse(n-1);
    else return -n + recurse(n-1);
}

int main(){
    int n; cin>>n;
    cout<<recurse(n);
}
