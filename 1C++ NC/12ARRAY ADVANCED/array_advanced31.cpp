#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n; cin>>n;
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];
    sort(a, a+n);
    int res= max(abs(a[0]+a[1]), abs(a[n-1]+a[n-2]));
    cout<<res;
}
