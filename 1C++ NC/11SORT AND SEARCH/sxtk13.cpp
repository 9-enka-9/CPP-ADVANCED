#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];
    sort(a, a+n, greater<int>());

    int i=0, cur=a[0];
    while (cur>0 and i<n){
        cur=min(--cur, --a[i++]);
    }
    cout<<--i;
}
