#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int, int> b){
    return a.second<b.second;
}

int main(){
    int n,x,y; cin>>n;
    vector<pair<int, int>> v;
    for (int i=0;i<n;i++){
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(), v.end(), cmp);
    int c=1;
    for (int i=1;i<n;i++){
        if (v[i-1].second<=v[i].first) c++;
    }
    cout<<c;
}
