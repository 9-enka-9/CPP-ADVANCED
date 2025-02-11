#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n; cin.ignore();
    map<string, vector<string>> mp;
    for (int i=0;i<n;i++){
        string s,s1, s2;
        getline(cin,s);
        while ()
        mp[s1].push_back(s2);
        mp[s2].push_back(s1);
    }
    for (auto it=mp.begin(); it!=mp.end(); it++){
        cout<<(*it).first<<" ";
    }
}
