#include<bits/stdc++.h>
using namespace std;

int res=1000;
int up(int a[], int l, int r, int x){
    if (l>r) return res;
    int m = (l+r)/2;
    if (a[m]>x){
        res=m;
        return up(a,m+1, r, x);
    } else return up(a,l,m-1,x);
}

int main(){
    int n; cin>>n;
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];
    int x; cin>>x;

    int l = up(a, 0, n, x);
    if (l!=1000) {
        cout<<l;
    } else cout<<n;
}
