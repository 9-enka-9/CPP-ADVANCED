#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    freopen("TROCHOI.INP", "r", stdin);
    freopen("TROCHOI.OUT", "w", stdout);
    int n; cin>>n;
    int a[n], b[n];
    for (int i=0;i<n;i++) cin>>a[i];
    for (int j=0;j<n;j++) cin>>b[j];
    sort(a,a+n); sort(b, b+n);
    int l=0,r=n-1;
    long long mi=LONG_MAX;
    while (l<n and r>=0){
        mi = min(1ll*abs(a[l]+b[r]), mi);
        if (a[l]+b[r] == 0) {
            break;
        } else if (a[l]+b[r]<0) l++;
        else r--;
    }
    cout<<mi;
    return 0;
}
