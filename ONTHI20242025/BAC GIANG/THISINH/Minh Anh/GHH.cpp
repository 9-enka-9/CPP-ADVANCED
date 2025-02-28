#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6;
int tonguoc[maxn+3];

void sanguoc(){
    for (int i=1;i<maxn;i++) tonguoc[i]=1;
    for (int i=2;i*i<=maxn;i++){
        for (int j=i*i;j<=maxn; j+=i){
            tonguoc[j]+=i;
            if (j/i!=i) tonguoc[j]+=(j/i);
        }
    }
}

int main(){
//    freopen("GHH.INP", "r", stdin);
//    freopen("GHH.OUT", "w", stdout);
    ios_base::sync_with_stdio(false); cin.tie(0);
    sanguoc();
    int n; cin>>n;
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];
    for (int i=0;i<n;i++) {
        if (tonguoc[a[i]]>=a[i]) cout<<1<<endl;
        else cout<<0<<endl;
    }
}
