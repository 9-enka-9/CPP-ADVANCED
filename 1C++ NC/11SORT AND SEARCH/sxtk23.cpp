#include<bits/stdc++.h>
using namespace std;

bool cmp1(pair<int, int> a, pair<int, int> b){
    if (a.second!=b.second) return a.second>b.second;
    else return return a.first<b.first;
}

bool cmp2(pair<int, int> a, pair<int, int> b){
    return a.second>b.second;
}

int main(){
    int n; cin>>n;
    int a[n];
    map<int, int> mp;
    for (int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    vector<pair<int, int>> v;
    for (auto it=mp.begin(); it!=mp.end(); it++){
        v.push_back({(*it).first,(*it).second});
    }

    sort(v.begin(), v.end(), cmp1);
    for (auto it=v.begin(), it!=v.end(); it++) cout<<(*it)
    for (int i=0;i<n;i++){
        v[i] = {a[i], mp[a[i]]};
    }
    stable_sort(v.begin(), v.end(), cmp2);

}
