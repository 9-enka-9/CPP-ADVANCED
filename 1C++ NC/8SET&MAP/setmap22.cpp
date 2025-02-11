#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    map<int,int> mp;
    int a[n];
    for (int i=0;i<n;i++){
        int val; cin>>val;
        mp[val]++;
        a[i]=mp[val];
    }
    for (int i=0;i<n;i++) cout<<a[i]<<" ";
}
