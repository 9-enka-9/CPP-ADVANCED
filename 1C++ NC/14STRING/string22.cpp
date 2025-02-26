#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t; getline(cin,s); getline(cin,t);
    stringstream ss(s), st(t);
    set<string> se1,se2;
    while (ss>>s){
        int l=s.size();
        for (int i=0;i<l;i++) s[i]=tolower(s[i]);
        se1.insert(s);
    }
    while (st>>t){
        int l=t.size();
        for (int i=0;i<l;i++) t[i]=tolower(t[i]);
        se2.insert(t);
    }

    for (set<string>::iterator it = se1.begin(); it!=se1.end(); it++){
        if (se2.find((*it)) == se2.end()) cout<<(*it)<<" ";
    }


}
