#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2; getline(cin, s1); getline(cin,s2);
    set<char> se1(s1.begin(), s1.end()), se2(s2.begin(), s2.end());
    for (set<char>::iterator it=se1.begin();it!=se1.end();it++){
        if (se2.find((*it))==se2.end()){
            cout<<(*it);
        }
    }
    cout<<endl;
    for (set<char>::iterator it=se2.begin();it!=se2.end();it++){
        if (se1.find((*it))==se1.end()){
            cout<<(*it);
        }
    }
}
