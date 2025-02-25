#include<bits/stdc++.h>
using namespace std;
string a[(int)1e5+5];

bool palin(string s){
    int n=s.size();
    for (int i=0;i<=n/2;i++){
        if (s[i]!=s[n-i-1]){
             return false;
        }
    }
    return true;
}

int main(){
    vector<string> v;
    string s;
    getline(cin,s);
    stringstream ss(s);
    string t;
    set<string> seen;
    while (ss>>t){
        if (seen.find(t)==seen.end() and palin(t)) v.push_back(t);
    }

    stable_sort(v.begin(), v.end(), [](string a, string b){
        int na=a.size(), nb=b.size();
        if (na!=nb) return na<nb;
    });
    int n=v.size();
    for (int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
