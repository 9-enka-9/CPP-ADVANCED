#include<bits/stdc++.h>
using namespace std;

int res=-1;
int low(int a[], int l, int r, int x){
    if (l>r) return res;
    int m=(l+r)/2;
    if (a[m]>=x) {
        res=m;
        return low(a, l, m-1, x);
    } else return low(a, m+1, r, x);
}

int up(int a[], int l, int r, int x){
    if (l>r) return res;
    int m = (l+r)/2;
    if (a[m]>x){
        res=m;
        return up(a,l, m-1, x);
    } else return up(a,m+1,r,x);
}

int main(){
    int n; cin>>n;
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];
    int x; cin>>x;

    int f = low(a, 0, n, x);
    int l = up(a, 0, n, x);
    if (f!=-1 or l==0) {
        cout<<l-f;
    } else cout<<0;
}
