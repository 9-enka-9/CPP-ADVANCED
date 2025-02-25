#include<bits/stdc++.h>
using namespace std;

vector<string> split(string s){
    vector<string> res;
    stringstream ss(s);
    string t;
    while (ss>>t){
        if (t!="") res.push_back(t);
    }
    return res;
}

int main(){
    string s; getline(cin,s);
    vector<string> v=split(s);
    map<string,int> mp;
    int n=v.size();
    for (int i=0;i<n;i++){
        mp[v[i]]=1;
    }
    for (map<string, int>::iterator it=mp.begin();it!=mp.end(); it++){
        cout<<(*it).first<<" ";
    }
    cout<<endl;
    for (int i=0;i<n;i++){
        if (mp[v[i]]!=0){
            cout<<v[i]<<" ";
            mp[v[i]]=0;
        }
    }
}
