#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    map<char, int> mp;
    int n=s.size();
    for (int i=0;i<n;i++){
        mp[s[i]]++;
    }
    long long c=0;
    for (map<char, int>::iterator it=mp.begin(); it!=mp.end(); it++){
        if ((*it).second>1){
            c+=(1ll*((*it).second-1)*(*it).second);
        }
    }
    cout<<c;
}
