#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; getline(cin,s);
    set<string> se;
    int n=s.length();
    int start=0;
    if (s[start]!=' '){
        string t="";
        while (s[start]!=' '){
            t+=s[start];
            start++;
        }
        se.insert(t);
    }
    for (int i=start;i<n;i++){
        if (s[i]!=' ' and s[i-1]==' '){
            string t="";
            while (s[i]!=' ' and i<n){
                t+=s[i];
                i++;
            }
            se.insert(t);
            i--;
        }
    }
    cout<<se.size()<<endl;
    auto it1=se.begin();
    auto it2=se.rbegin();
    cout<<*it1<<" "<<*it2;
}
