#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k; cin>>n>>k;
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];
    long long s=a[0];
    sort(a+1, a+n, greater<int>());

    for (int i=1;i<=k;i++){
        s+=a[i];
    }
    for (int i=k+1;i<n;i++){
        s-=a[i];
    }
    cout<<s;
}
