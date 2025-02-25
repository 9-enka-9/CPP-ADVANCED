#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; getline(cin,s);
    set<char> se;
    int n=s.size();
    for (int i=0;i<n;i++){
        if (isalpha(s[i])){
            se.insert(s[i]);
        }
    }
    if (se.size()==26) cout<<"YES";
    else cout<<"NO";
}
