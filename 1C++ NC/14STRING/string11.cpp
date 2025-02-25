#include<bits/stdc++.h>
using namespace std;

//vector<string> split(string s, string needle){
//    vector<string> res;
//    int startPos=0;
//    int foundPos = s.find(needle, startPos);
//    while (foundPos!=string::npos){
//        int cnt = foundPos-startPos;
//        string t=s.substr(startPos, cnt);
//        if (not t.empty()){
//            res.push_back(t);
//        }
//        startPos = foundPos + needle.size();
//        foundPos = s.find(needle, startPos);
//    }
//    string lastToken = s.substr(startPos);
//    if (not lastToken.empty()) res.push_back(lastToken);
//    return res;
//}

vector<string> split(string s){
    vector<string> res;
    stringstream ss(s);
    string t;
    while (ss>>t){
        if (t!="") res.push_back(t);
    }
    return res;
}

int main(){
    string s; getline(cin,s);
    vector<string> v=split(s);
    int n=v.size();
    sort(v.begin(), v.end());
    for (int i=0;i<n;i++) cout<<v[i]<<" ";
    cout<<endl;
    sort(v.begin(), v.end(), [](string a, string b){
         int na = a.size(), nb=b.size();
         if (na!=nb) return na<nb;
         else return a<b;
    });
    for (int i=0;i<n;i++) cout<<v[i]<<" ";
}
