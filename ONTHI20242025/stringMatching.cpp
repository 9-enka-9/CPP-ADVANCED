#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
//    freopen("stringMatching.inp", "r", stdin);
//    freopen("stringMatching.out", "w", stdout);
    string s,key; getline(cin,s); getline(cin,key);
    unsigned long long c=0, start = 0, found = s.find(key,start), n=s.size();
    while (found!=string::npos and start<n){
        c++;
        start = found+1;
        found = s.find(key, start);
    }
    cout<<c;
}
