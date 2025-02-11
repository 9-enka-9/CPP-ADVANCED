#include<bits/stdc++.h>
using namespace std;

const int maxn = 1e7+1;
int t[maxn], f[maxn];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m; cin>>n>>m;
    for (int i=0;i<n;i++){
        int x; cin>>x;
        t[x]++;
    }
    for (int i=0;i<m;i++){
        int x; cin>>x;
        f[x]++;
    }

    for (int i=0;i<maxn;i++){
        if (t[i] and f[i]) cout<<i<<" ";
    }
    cout<<endl;
    for (int i=0;i<maxn;i++){
        if (t[i] or f[i]) cout<<i<<" ";
    }
}
