#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m,k; cin>>n>>m>>k;
    int a[n], b[m];
    for (int i=0;i<n;i++) cin>>a[i];
    for (int i=0;i<m;i++) cin>>b[i];
    sort(a, a+n);
    sort(b, b+m);

    int i=0,j=0,c=0;
    while (i<n and j<m){
        if (abs(a[i]-b[j])<=k){
            c++; i++; j++;
        } else if (a[i]<b[j]) i++;
        else j++;
    }
    cout<<c;
}
