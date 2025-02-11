#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define bp pop_back

int main(){
    freopen("DAYDEN.INP", "r", stdin);
    freopen("DAYDEN.OUT", "w", stdout);
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, m, q, k; cin>>n>>m>>q>>k;
    vector<char> v;
    map<char, char> mp; mp['V']='D'; mp['D']='V';
    for (int i=0;i<n;i++) v.pb('V');
    for (int i=0;i<m;i++){
        int x; cin>>x; x--;
        int start=max(0,x-k), end=min(x+k,n-1);
        for (int j=start;j<=end;j++){
            v[j]=mp[v[j]];
        }
    }
    for (int i=0;i<q;i++){
        int q; cin>>q; q--;
        cout<<v[q]<<endl;
    }
}
