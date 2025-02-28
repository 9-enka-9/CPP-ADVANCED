#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("TEN.INP", "r", stdin);
    freopen("TEN.OUT", "w", stdout);
    string s; getline(cin, s);
    stringstream ss(s);
    int n;
    while (ss>>s){
        n=s.size();
        if ('a'<=s[0] and s[0]<='z') s[0]=s[0]-'a'+'A';
        for (int i=1;i<n;i++) {
            if ('A'<=s[i] and s[i]<='Z') s[i]=s[i]-'A' + 'a';
        }
        cout<<s<< " ";
    }

}
