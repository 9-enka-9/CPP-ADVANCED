#include<bits/stdc++.h>
using namespace std;
vector<string> v;

int main(){
    map<string, int> mp1;
    map<string, int> mp2;
    string s;
    getline(cin,s);
    stringstream ss(s);
    string t;
    while (ss>>t){
        mp1[t]++;
        mp2[t]++;
        v.push_back(t);
    }
    int n=v.size();
    for (int i=0;i<n;i++){
        if (mp1[v[i]]>0){
            cout<<v[i]<<" "<<mp1[v[i]]<<endl;
            mp1[v[i]]=0;
        }
    }
    cout<<endl;
    for (int i=n-1;i>=0;i--){
        if (mp2[v[i]]>0){
            cout<<v[i]<<" "<<mp2[v[i]]<<endl;
            mp2[v[i]]=0;
        }
    }
}
