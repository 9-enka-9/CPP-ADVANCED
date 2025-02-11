#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string, int> mp;
    string s;
    while (cin>>s){
        mp[s]++;
    }
    for (auto& it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
}
