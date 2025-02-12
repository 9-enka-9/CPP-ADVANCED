#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin>>n>>m;
    int a[n], b[m];
    for (int i=0;i<n;i++) cin>>a[i];
    for (int i=0;i<m;i++) cin>>b[i];
    sort(a,a+n); sort(b,b+m);

    int i=0,j=0, c=0;
    while (i<n and j<m){
        if (a[i]>b[j]){
            c++;
            i++; j++;
        } else i++;
    }
    cout<<c;
}
