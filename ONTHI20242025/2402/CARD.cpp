#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("CARD.INP", 'r', stdin);
    freopen("CARD.OUT", 'w', stdout);
    int n; cin>>n;
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];
    sort(a, a+n);

    for (int i=0;i<n;i++){
        if (a[i]==a[i+1]) {
            i++;
        } else cout<<a[i]<<" ";
    }
}
