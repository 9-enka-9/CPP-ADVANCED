#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,l; cin>>n>>l;
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);

    double maxd = max(a[0]-0, l-a[n-1]);
    for (int i=1;i<n;i++){
        double t=(a[i]-a[i-1])/2.0;
        maxd = max(maxd, t);
    }
    cout<<fixed<<setprecision(10)<<maxd;
}
