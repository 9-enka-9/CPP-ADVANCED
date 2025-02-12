#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m; cin>>n>>m;
    int a[n], b[m];
    for (int &x:a) cin>>x;
    for (int &x:b) cin>>x;

    vector<int> giao, hop;
    int i=0, j=0;
    while (i<n and j<m){
        if (a[i]==b[j]){
            giao.pb(a[i++]);
            hop.pb(b[j++]);
        } else if (a[i]<b[j]) hop.pb(a[i++]);
        else hop.pb(b[j++]);
    }
    while (i<n) hop.pb(a[i++]);
    while (j<m) hop.pb(b[j++]);

    for (int x:hop) cout<<x<<" ";
    cout<<endl;
    for (int x:giao) cout<<x<<" ";
}
