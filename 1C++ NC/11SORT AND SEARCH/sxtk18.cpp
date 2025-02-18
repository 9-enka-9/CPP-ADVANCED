#include<bits/stdc++.h>
using namespace std;

int last(int a[], int l, int r, int val){
    int res=-1;
    while (l<=r){
        int m=(l+r)/2;
        if (a[m]<val){
            res=m;
            l=m+1;
        } else r=m-1;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,k; cin>>n>>k;
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];
    sort(a, a+n);

    int c=0;
    for (int i=0;i<n and a[i]<=k/2;i++){
        int t=last(a, i+1, n-1, k-a[i]);
        if (t-i>0) c+=(t-i);
    }

    cout<<c;
}
