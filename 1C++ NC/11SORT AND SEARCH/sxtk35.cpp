#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,x; cin>>n>>x;
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];
    sort(a, a+n);

    int res=n, i=0, j=n-1;
    while (i<j){
        if (a[i]+a[j]<=10){
            res--;
            i++; j--;
        } else if (a[i]+a[j]>0) j--;
    }
    cout<<res;
}
