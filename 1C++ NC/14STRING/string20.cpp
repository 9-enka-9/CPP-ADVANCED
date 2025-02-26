#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    string pattern = "python";
    string t="";
    int c=0;
    int n= s.size();
    for (int i=0;i<n and c<6;i++){
        if (pattern[c]==s[i]){
            t+=s[i];
            c++;
        }
    }
    if (c==6) cout<<"YES";
    else cout<<"NO";
}
