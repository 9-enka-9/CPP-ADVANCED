#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n; cin>>n;
    int a[n+1];
    for (int i=0;i<n;i++) cin>>a[i];
    sort(a, a+n);

    long long b=0,c=0;
    for (int i=0;i<n-1;i+=2){
        b*=10; b+=a[i];
        c*=10; c+=a[i+1];
    }
    if (n%2!=0) {
        b*=10; b+=a[n-1];
    }
    cout<<b+c;
}
