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
    string s;
    getline(cin,s);
    stringstream ss(s);
    string t;
    while (ss>>t){
        if (palin(t)) cout<<t<<" ";
    }
}
