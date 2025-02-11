#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    map<string, int> mp;
    int mi=10001, ma=0;
    for (int i=0;i<n;i++){
        string t; cin>>t;
        mp[t]++;
    }
    for (auto& it:mp){
        cout<<it.first<<" "<<it.second<<endl;
        if (it.second<mi) mi=it.second;
        if (it.second>ma) ma=it.second;
    }
    cout<<endl;
    for (auto& it:mp){
        if (it.second==mi){
            cout<<it.first<<" "<<it.second<<endl;
            break;
        }
    }

    for (auto& it:mp){
        if (it.second==ma){
            cout<<it.first<<" "<<it.second<<endl;
            break;
        }
    }
}
