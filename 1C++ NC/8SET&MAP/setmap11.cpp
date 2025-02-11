#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    set<int> a;
    set<int> b;
    for (int i=0; i<n; i++){
        int t; cin>>t;
        a.insert(t);
    }
    for (int i=0;i<m;i++){
        int t; cin>>t;
        b.insert(t);
    }

    for (auto it=a.begin(); it!=a.end(); it++){
        if (b.count(*it)==0) cout<<*it<<" ";
    }
}
