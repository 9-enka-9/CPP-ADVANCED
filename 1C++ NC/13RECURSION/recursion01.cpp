#include<bits/stdc++.h>
using namespace std;

int cnt(int n){
    if (n==1) return 0;
    int x=0,y=0,z=0;
    if (n%2==0) x=cnt(n/2)+1;
    if (n%3==0) y=cnt(n/3)+1;
    if (n>1) z=cnt(n-1)+1;
    return min({x,y,z});
}

int main(){
    int n; cin>>n;
    cout<<cnt(n);
}
