#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m,t; cin>>n>>m;
    set<int> a,hop,giao;
    for (int i=0;i<n;i++){
        cin>>t; a.insert(t);
        hop.insert(t);
    }
    for (int i=0;i<m;i++){
        cin>>t;
        hop.insert(t);
        if (a.find(t)!=a.end()) giao.insert(t);
    }

    for (auto it=giao.begin(); it!=giao.end(); it++) cout<<(*it)<<" ";
    cout<<endl;
    for (auto it=hop.begin(); it!=hop.end(); it++) cout<<(*it)<<" ";
}
