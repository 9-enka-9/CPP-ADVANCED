#include<bits/stdc++.h>
using namespace std;
#define pb push_back

bool cmp(pair<int, int> a ,pair<int, int> b){
    return a.second<b.second;
}

int main(){
    int n,a,b; cin>>n;
    vector<pair<int,int>> v;
    for (int i=0;i<n;i++){
        cin>>a>>b; v.pb({a,b});
    }
    sort(v.begin(), v.end(), cmp);

    int c=1, old = v[0].second;
    for (int i=1;i<n;i++){
        if (v[i].first>old){
            c++;
            old = v[i].second;
        }
    }
    cout<<c;
}
