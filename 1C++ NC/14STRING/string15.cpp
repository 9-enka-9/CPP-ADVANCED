#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t; getline(cin,s); getline(cin,t);
    if (s.find(t)!=string::npos) cout<<"YES";
    else cout<<"NO";
}
