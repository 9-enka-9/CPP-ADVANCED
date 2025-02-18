#include<bits/stdc++.h>
using namespace std;

map<int, int> mp;

bool cmp1(int a, int b){
    if (mp[a]!=mp[b]) return mp[a]>mp[b];
    return a<b;
}

bool cmp2(int a, int b){
    return mp[a]>mp[b];
}

void first(vector<int> v, int n){
    sort(v.begin(), v.end(), cmp1);
    for (int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}

void second(vector<int> v, int n){
    stable_sort(v.begin(), v.end(), cmp2);
    for (int i=0;i<n;i++){
        while (mp[v[i]]>0){
            cout<<v[i]<<" ";
            mp[v[i]]--;
        }
    }
}

int main(){
    int n,t; cin>>n;
    vector<int> v;
    for (int i=0;i<n;i++){
        cin>>t; v.push_back(t);
        mp[t]++;
    }
    first(v, n);
    cout<<endl;
    second(v,n);
}
