#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    if (a.first!=b.first) return a.first<b.first;
    else return a.second>b.second;
}

int main(){
    int n,p; cin>>n>>p;
    vector<pair<int, int>> v;
    int x,y;
    for (int i=0;i<n;i++){
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(), v.end(), cmp);

    for (int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    for (int i=0;i<n;i++){
        if (p>v[i].first){
            p+=v[i].second;
        } else {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}
