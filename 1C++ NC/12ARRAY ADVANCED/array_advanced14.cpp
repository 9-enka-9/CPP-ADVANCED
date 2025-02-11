#include<bits/stdc++.h>
using namespace std;

bool giam(int n){
    int old = n%10;
    n/=10;
    while (n){
        if (old<n%10) return false;
        else {
            old=n%10;
            n/=10;
        }
    }
    return true;
}

bool cmp(pair<int, int> a, pair<int, int> b){
    if (a.second!=b.second) return a.second>b.second;
    else return a<b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    map<int, int> mp;
    while(cin>>x){
        mp[x]++;
    }
    vector<pair<int, int>> v;
    for (auto it=mp.begin(); it!=mp.end(); it++){
        if (giam((*it).first)){
            v.push_back({(*it).first,(*it).second});
        }
    }
    sort(v.begin(), v.end(), cmp);

    for (pair<int, int> &x:v){
        cout<<x.first<<" "<<x.second<<endl;
    }
}
