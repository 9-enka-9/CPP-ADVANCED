#include<bits/stdc++.h>
using namespace std;

string name(string ten){
    string res="";
    stringstream sten(ten);
    while (sten>>ten){
        ten[0] = toupper(ten[0]);
        int n=ten.size();
        for (int i=1;i<n;i++){
            ten[i]=tolower(ten[i]);
        }
        res=res+ten+" ";
    }
    res.pop_back();
    return res;
}

string age(string s){
    if (not isdigit(s[1])){
        s="0"+s;
    }
    if (not isdigit(s[4])){
        s.insert(3,"0");
    }
    return s;
}

int main(){
    string ten, ns; getline(cin,ten); getline(cin,ns);
    cout<<name(ten)<<endl;
    cout<<age(ns);
}
