#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,x,y; cin>>n;
    vector<pair<int, int >> v;
    for (int i=0;i<n;i++){
        cin>>x>>y;
        v.push_back({x,1});
        v.push_back({y,-1});
    }
    sort(v.begin(), v.end());

    int c=0,m=-1;
    for (auto val:v){
        c+=val.second;
        m=max(m,c);
    }
    cout<<m;
}
