#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k, t; cin>>n>>k;
    unordered_map<int, int> mp;
    int c=0;
    for (int i=0;i<n;i++){
        cin>>t; mp[t]++;
        if (t+t!=k and mp.find(k-t)!=mp.end()){
            c+=mp[k-t];
        }
    }
    if (k%2==0 and mp.find(k/2)!=mp.end()){
        c+=((mp[k/2]*(mp[k/2]-1))/2);
    }
    cout<<c;
}
