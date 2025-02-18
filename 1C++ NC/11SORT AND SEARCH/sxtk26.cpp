#include<bits/stdc++.h>
using namespace std;

int last(int a[], int l, int r, int val){
    int res=r+1;
    while (l<=r) {
        int m=(l+r)/2;
        if (a[m]>val){
            res=m;
            r=m-1;
        } else l=m+1;
    }
    return res;
}

int first(int a[], int l, int r, int val){
    int res=-1;
    while (l<=r) {
        int m=(l+r)/2;
        if (a[m]>=val){
            res=m;
            r=m-1;
        } else l=m+1;
    }
    return res;
}

int main(){
    int n,k; cin>>n>>k;
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];
    sort(a, a+n);

    int c=0;
    for (int i=0;i<n;i++){
        int f=first(a, i+1, n-1, k+a[i]);
        if (f!=-1){
            int l=last(a, i+1, n-1, k+a[i]);
            c+=(l-f);
        }
    }
    cout<<c;
}
