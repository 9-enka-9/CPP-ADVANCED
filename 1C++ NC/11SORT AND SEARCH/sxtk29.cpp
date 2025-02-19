#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n; cin>>n;
    int a[n];
    for (int i=0;i<n; i++) cin>>a[i];
    sort(a, a+n);

    vector<int> v1,v2;
    int mid=n/2;
    if (n%2!=0) mid=(n/2)+1;
    for (int i=0;i<mid;i++){
        v1.pb(a[i]);
    }
    for (int i=mid;i<n;i++){
        v2.pb(a[i]);
    }

    int j=0,k=0;
    for (int i=0;i<n;i++){
        if (i%2==0) cout<<v1[j++]<<" ";
        else cout<<v2[k++]<<" ";
    }
}
