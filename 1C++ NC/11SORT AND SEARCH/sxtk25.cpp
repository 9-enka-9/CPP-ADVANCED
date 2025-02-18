#include<bits/stdc++.h>
using namespace std;


int main(){
    int n; cin>>n;
    vector<pair<int,int>> v;
    int a,b;
    for (int i=0;i<n;i++){
        cin>>a>>b; v.push_back({a,b});
    }
    sort(v.begin(), v.end());

    int cur=v[0].first;
    for (int i=0;i<n;i++){
        cur=max(cur+v[i].second, v[i].first + v[i].second);
    }
    cout<<cur;
}
