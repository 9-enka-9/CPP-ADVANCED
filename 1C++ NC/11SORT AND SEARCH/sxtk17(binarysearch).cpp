#include<bits/stdc++.h>
using namespace std;

int last(int a[], int l, int r, int val){
    int res=-1;
    while (l<=r){
        int m=(l+r)/2;
        if (a[m]==val){
            l=m+1;
            res=m;
        } else if (a[m]<val) l=m+1;
        else r=m-1;
    }
    return res;
}

int first(int a[], int l, int r, int val){
    int res=-1;
    while (l<=r){
        int m=(l+r)/2;
        if (a[m]>=val){
            res=m;
            r=m-1;
        } else l=m+1;
    }
    return res;
}

int main(){
    int n, k; cin>>n>>k;
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];
    sort(a, a+n);

    int c=0;
    for (int i=0;i<n;i++){
        int e=last(a,i+1, n-1, k-a[i]);
        if (e!=-1){
            c+=(e-first(a,i+1, n-1, k-a[i])+1);
//            cout<<e<<" "<<first(a,i+1, n-1, k-a[i])<<endl;
        }
    }
    cout<<c;
}
