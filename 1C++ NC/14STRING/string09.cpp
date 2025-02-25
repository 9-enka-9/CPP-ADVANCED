#include<bits/stdc++.h>
using namespace std;

//vector<string> split(string s){
//    vector<string> v;
//    stringstream ss(s);
//    string t;
//    while (ss>>t){
//        if (t!=""){
//            v.push_back(t);
//        }
//    }
//    return v;
//}

vector<string> split(string s, string needle){
    vector<string> res;
    int startPos = 0;
    int foundPos = s.find(needle,startPos);
    while (foundPos!=string::npos){
        int cnt=foundPos-startPos;
        string t=s.substr(startPos,cnt);
        if (not t.empty()) res.push_back(t);
        startPos = foundPos + needle.size();
        foundPos=s.find(needle, startPos);
    }
    string lastToken = s.substr(startPos);
    if (not lastToken.empty()) res.push_back(lastToken);
    return res;
}

int main(){
    string s;
    getline(cin,s);
    vector<string> v=split(s," ");
    cout<<v.size();
}
