#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> v;
    string s; getline(cin,s);
    stringstream ss(s);
    while (ss>>s){
        v.push_back(s);
    }
    int n=v.size();
    for (int i=0;i<v[n-1].size();i++){
        v[n-1][i] = toupper(v[n-1][i]);
    }
    for (int i=0;i<n-1;i++){
        v[i][0] = toupper(v[i][0]);
        int l=v[i].size();
        for (int j=1;j<l;j++){
            v[i][j] = tolower(v[i][j]);
        }
    }

    for (int i=0;i<n-2;i++){
        cout<<v[i]<<" ";
    } cout<<v[n-2]<<", "<<v[n-1];

    cout<<endl;
    cout<<v[n-1]<<", ";
    for (int i=0;i<n-1;i++){
        cout<<v[i]<<" ";
    }
}
