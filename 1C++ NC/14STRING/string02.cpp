#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; getline(cin,s);
    int n=s.size();
    for (int i=0;i<n;i++){
        cout<<(char)tolower(s[i]);
    }
    cout<<endl;
    for (int i=0;i<n;i++){
        cout<<(char)toupper(s[i]);
    }
}
