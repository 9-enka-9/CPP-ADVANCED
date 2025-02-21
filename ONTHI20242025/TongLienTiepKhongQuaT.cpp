#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,t; cin>>n>>t;
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];

    ll s=a[0];
    int l=0, r=0, ml=0;
    while (r<n){
        if (s<=t){
            ml = max(ml, r-l+1);
            s+=a[++r];
        } else {
            l++;s-=a[l];
        }
    }
    cout<<ml;
}
